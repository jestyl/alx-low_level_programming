#include "lists.h"

/**
 * listint_len - lenght of linked lists
 *
 * @h: linked list of type listint_t to traverse
 *
 * Return: Length of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
