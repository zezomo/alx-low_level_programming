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
 * str_concat - check the codefawdf fa fawfdw fa fwf f fwaffawf
 *
 * @s1 : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * @s2 : da dw daf fg faw faf adffawdfawdf faw fwfaw gaega f
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *cha;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	len1 = count(s1);
	len2 = count(s2);

	cha = malloc((len1 + len2) * sizeof(char) + 1);
	if (cha == 0)
		return (0);

	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
                {
                        cha[i] = s1[i];
                }
                else
                {
                        cha[i] = s1[i];
                }
	}
	cha[i] = '\0';
        return (cha);
}
