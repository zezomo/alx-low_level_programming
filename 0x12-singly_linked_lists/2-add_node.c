#include "lists.h"

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
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
 		return (new);
	}

	while (temp->next)
		temp = temp->next;

 	temp->next = new;
	return (new);
}
