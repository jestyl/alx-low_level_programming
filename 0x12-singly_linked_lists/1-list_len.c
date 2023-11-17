#include <stdlib.h>
#include "lists.h"

size_t step_through(const list_t *);
/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to a list
 *
 * Return: the lenth of the list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

/* Assuming that since the list isn't null there is */
/* one ele to account for */

	if (!h->next)
		return (1);
	return (1 + step_through(h));
}

/**
 * step_through - step through the list
 * @h: a pointer to a list
 *
 * Return: a count for every step through the list
 */
size_t step_through(const list_t *h)
{
	if (!h->next)
		return (0);
	return (1 + step_through(h->next));
}
