#include <stdlib.h>
#include "dog.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_dog - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @d: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("name: %s\n", d->name ? d->name : "nil");
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "nil");
	}
}

