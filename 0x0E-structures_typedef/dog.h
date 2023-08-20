#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>



/**
 * struct dog - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @name: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @age: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @owner: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
