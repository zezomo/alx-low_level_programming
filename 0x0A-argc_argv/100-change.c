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
	if (argc == 2)
	{
		int c, cants = 0, monay = atoi(argv[1]);
		int centss[] = {25, 10, 5, 2, 1};

		for (c = 0; c < 5; c++)
		{
			if(monay >+ centss[c])
			{
                                cants += monay / centss[c];
                                monay = monay % centss[c];
                                if (monay % centss[c] == 0)
                                        break;
			}
		}
		printf("%d\n", cants);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
