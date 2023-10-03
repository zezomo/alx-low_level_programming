#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void verify_elf(unsigned char *elf_ident);
void display_magic_numbers(unsigned char *elf_ident);
void display_class(unsigned char *elf_ident);
void display_data_encoding(unsigned char *elf_ident);
void display_version(unsigned char *elf_ident);
void display_os_abi(unsigned char *elf_ident);
void display_abi_version(unsigned char *elf_ident);
void display_file_type(unsigned int elf_type, unsigned char *elf_ident);
void display_entry_point(unsigned long int entry_point, unsigned char *elf_ident);
void close_elf_file(int elf_fd);

void verify_elf(unsigned char *elf_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (elf_ident[index] != 127 &&
		    elf_ident[index] != 'E' &&
		    elf_ident[index] != 'L' &&
		    elf_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void display_magic_numbers(unsigned char *elf_ident)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

void display_class(unsigned char *elf_ident)
{
	printf(" Class: ");

	switch (elf_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_CLASS]);
	}
}

void display_data_encoding(unsigned char *elf_ident)
{
	printf(" Data: ");

	switch (elf_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_DATA]);
	}
}

void display_version(unsigned char *elf_ident)
{
	printf(" Version: %d",
		   elf_ident[EI_VERSION]);

	switch (elf_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

void display_os_abi(unsigned char *elf_ident)
{
	printf(" OS/ABI: ");

	switch (elf_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_ident[EI_OSABI]);
	}
}

void display_abi_version(unsigned char *elf_ident)
{
	printf(" ABI Version: %d\n",
		   elf_ident[EI_ABIVERSION]);
}

void display_file_type(unsigned int elf_type, unsigned char *elf_ident)
{
	if (elf_ident[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf(" Type: ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}

void display_entry_point(unsigned long int entry_point, unsigned char *elf_ident)
{
	printf(" Entry point address: ");

	if (elf_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry_point = ((entry_point << 8) & 0xFF00FF00) |
					  ((entry_point >> 8) & 0xFF00FF);
		entry_point = (entry_point << 16) | (entry_point >> 16);
	}

	if (elf_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_point);
	else
		printf("%#lx\n", entry_point);
}

void close_elf_file(int elf_fd)
{
	if (close(elf_fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf_fd);
		exit(98);
	}
}

int main(int argc, char *argv[])
{
	Elf64_Ehdr *elf_header;
	int file_fd, read_result;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_file\n", argv[0]);
		exit(97);
	}

	file_fd = open(argv[1], O_RDONLY);
	if (file_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (elf_header == NULL)
	{
		close_elf_file(file_fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	read_result = read(file_fd, elf_header, sizeof(Elf64_Ehdr));
	if (read_result == -1)
	{
		free(elf_header);
		close_elf_file(file_fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	verify_elf(elf_header->e_ident);
	printf("ELF Header:\n");
	display_magic_numbers(elf_header->e_ident);
	display_class(elf_header->e_ident);
	display_data_encoding(elf_header->e_ident);
	display_version(elf_header->e_ident);
	display_os_abi(elf_header->e_ident);
	display_abi_version(elf_header->e_ident);
	display_file_type(elf_header->e_type, elf_header->e_ident);
	display_entry_point(elf_header->e_entry, elf_header->e_ident);

	free(elf_header);
	close_elf_file(file_fd);

	return (0);
}
