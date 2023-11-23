#include "main.h"

/**
 * clear_bit - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @n: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @index: gwge hfvev heov hoef gve gfgwfw fwefeg effgwefa faefwf
 *
 * Return: number of words
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~mask;
	*n &= mask;

	return (1);
}


