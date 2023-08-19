#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @array: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @size: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @action: afwgafgwibgva bwafn oa awn w fnaf afaf w affgag w fawfg fafwf
 *
 * Return: number of words
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
