#include "main.h"

/**
 * get_endianness - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * Return: number of words
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
