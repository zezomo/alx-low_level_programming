#include "main.h"

/**
 * get_endianness - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @n: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @m: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
