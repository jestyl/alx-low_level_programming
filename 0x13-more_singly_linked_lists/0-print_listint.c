#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 *
 * @h: linked list of type listint_t to print
 *
 * Return: Number of elements in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
