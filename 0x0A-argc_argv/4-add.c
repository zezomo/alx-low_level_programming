#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @argv : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @argc : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int add = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		add += atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}
