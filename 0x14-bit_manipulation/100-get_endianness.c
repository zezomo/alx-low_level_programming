#include "main.h"

/**
 * get_endianness - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * Return: number of words
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	return ((int)*byte_ptr);
}

