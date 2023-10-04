#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *output_file);
void close_file_descriptor(int fd);
/**
 * create_buffer - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @output_file : vohewivbeivbe ieheiybw cbiywebcw ibeyvbweivy ibveyib
 *
 * Return: number of words
 */
char *create_buffer(char *output_file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", output_file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file_descriptor - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @fd : vohewivbeivbe ieheiybw cbiywebcw ibeyvbweivy ibveyib
 *
 * Return: number of words
 */
void close_file_descriptor(int fd)
{
	int close_result;

	close_result = close(fd);

	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @argc : vohewivbeivbe ieheiybw cbiywebcw ibeyvbweivy ibveyib
 *
 * @argv : dveneiv nciunwiucn cniucnwiuncw vnwcinwi wi cwwnc wcn
 *
 * Return: number of words
 */
int main(int argc, char *argv[])
{
	int source_fd, destination_fd, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source_fd = open(argv[1], O_RDONLY);
	bytes_read = read(source_fd, buffer, 1024);
	destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_fd == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		bytes_written = write(destination_fd, buffer, bytes_read);
		if (destination_fd == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		bytes_read = read(source_fd, buffer, 1024);
		destination_fd = open(argv[2], O_WRONLY | O_APPEND);

	} while (bytes_read > 0);

	free(buffer);
	close_file_descriptor(source_fd);
	close_file_descriptor(destination_fd);

	return (0);
}
