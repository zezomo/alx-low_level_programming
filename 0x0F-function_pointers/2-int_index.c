#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @array: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @size: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @cmp: afwgafgwibgva bwafn oa awn w fnaf afaf w affgag w fawfg fafwf
 *
 * Return: number of words
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
