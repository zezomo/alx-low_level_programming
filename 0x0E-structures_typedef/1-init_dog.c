#include <stdlib.h>
#include "main.h"
#include "dog.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * init_dog - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @d: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @name: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @age: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @owner: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}	
}
