#include "main.h"

/**
 * binary_to_uint - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @b:f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = (result << 1) + (b[i] - '0');
		i++;
	}

	return (result);
}

