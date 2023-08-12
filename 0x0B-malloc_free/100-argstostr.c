#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

char count(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
	;
	return (len);

}


/**
 * argstostr - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @ac : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @av : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, c = 0, cc = 0;
	char *ccc;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; c++, i++)
		c += count(av[i]);
	ccc = malloc(sizeof(char) * c + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cc++)
			ccc[cc] = av[i][j];
	
		ccc[cc] = '\n';
		cc++;
	}
	ccc[cc] = '\0';
	return (ccc);
}
