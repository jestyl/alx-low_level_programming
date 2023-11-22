#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *pre;

	if (!head || !(*head))
	{
		return (NULL);
	}

	if (!(*head)->next)
	{
		return (*head);
	}
	temp = *head;
	pre = NULL;
	while (1)
	{
		if (!pre)
		{
			pre = *head;
			temp = temp->next;
			pre->next = NULL;
			*head = pre;
		}
		else
		{
			pre = temp;
			temp = temp->next;
			pre->next = *head;
			if (!temp)
			{
				temp = pre;
				break;
			}
			*head = pre;
		}
	}
	*head = temp;

	return (*head);
}
