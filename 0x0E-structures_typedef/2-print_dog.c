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
		printf("Name: %s\n", d->name ? d->name : "nil");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "nil");
	}
}

