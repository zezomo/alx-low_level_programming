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
	{
		length++;
	}
	return (length);
}

/**
 * add_node - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @head: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @str: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));

	if (!head || !newhead)
	return (NULL);
	if (str)
	{
		newhead->str = strdup(str);
		if (!newhead->str)
		{
			free(newhead);
			return (NULL);
		}
		newhead->len = _strlen(newhead->str);
	}
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
