#include "lists.h"

/**
 * _strlen - calulate the length of string
 * Description: it calulate the string passed to _puts
 * @s: '*s' is a pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
/**
 * print_list - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @h: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
size_t print_list(const list_t *h)
{
	size_t I = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);

}
