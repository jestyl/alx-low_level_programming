#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: pointer to the list to print
 *
 * Return: the number
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes;

	if (!h)
		return (0);
	n_nodes = 0;
	do {
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		n_nodes++;
	}  while (h);

	return (n_nodes);
}
