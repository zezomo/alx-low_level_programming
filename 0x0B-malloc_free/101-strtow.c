#include <stdlib.h>
#include "main.h"

/**
 * count - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @ss: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
int count(char *ss)
{
	int fl, cc, ww;

	fl = 0;
	ww = 0;

	for (cc = 0; ss[cc] != '\0'; cc++)
	{
		if (ss[cc] == ' ')
			fl = 0;
		else if (fl == 0)
		{
			fl = 1;
			ww++;
		}
	}

	return (ww);
}
/**
 * **strtow - dfaf efa fe fafaefa f fe faafafaf affaf afafafefg f fa
 *
 * @str: saf fa ffaffaf f efafwf ga fa fafafafaf f efafafaef ef af fae
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int ii, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (ii = 0; ii <= len; ii++)
	{
		if (str[ii] == ' ' || str[ii] == '\0')
		{
			if (c)
			{
				end = ii;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = ii;
	}

	matrix[k] = NULL;

	return (matrix);
}

