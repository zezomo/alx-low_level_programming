#include "lists.h"

/**
 * free_list - helafsfaf fa fa ffafafaf f afar awe faf aef afaf af fafaf
 *
 * @head: f af f agaefgafadfafaf f f af f fwefaf f aef faefwef f aef f
 *
 * Return: number of words
 */
void free_list(list_t *head)
{
	list_t *node, *next_node;
	
	if (!head)
		return;

	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}

}
