#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to head
 * @index: position to get node formed in a list.
 *
 * Return: pointer of the found node, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx = 0;
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = head;
	if (node->prev)
		node = node->prev;
	while (idx < index && node)
	{
		node = node->next;
		idx++;
	}
	return (node);
}
