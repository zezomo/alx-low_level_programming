#include "main.h"

/**
 * get_bit - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @n: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @index: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	
	return (n >> index & 1);

}
