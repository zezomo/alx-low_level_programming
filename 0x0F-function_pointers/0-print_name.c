#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 * 
 * @name: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @f: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f())
		f(name);

}
