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
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
