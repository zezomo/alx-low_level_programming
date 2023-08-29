#include "lists.h"

/**
 * add_node_end - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @head: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * @str: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newhead = malloc(sizeof(list_t));
	list_t *node = *head;

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
		newhead->len = strlen(newhead->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = newhead;
	}
	else
	{
		*head = newhead;
	}
	return (newhead);
}
