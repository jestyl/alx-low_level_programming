#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 *
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *pre;

	if (!(*head))
		return (-1);
	i = 0;
	pre = NULL;
	node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			pre->next = node->next;
			free(node);
			return (1);
		}
		pre = node;
		node = node->next;
		i++;
	}

	return (-1);
}
