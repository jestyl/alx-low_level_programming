#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to linked list
 *
 * @head: double pointer to the list
 * @str: new string to add in the node
 *
 * Return: the address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (str[len])
		len++;
	new->len = len;

	new->str = strdup(str);
	if (!(*head))
		new->next = NULL;
	else
		new->next = *head;
	*head = new;

	return (*head);
}
