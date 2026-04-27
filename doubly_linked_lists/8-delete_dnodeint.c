#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index and
 * update head if necessary
 * @head: head of list
 * @index: index of node to delete
 * Return: 1 on succsess -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *lhead = *head;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		if ((*head) != NULL)
			(*head)->prev = NULL;
		free(lhead);
		return (1);
	}

	while (i < index)
	{
		if (lhead->next == NULL)
			return (-1);
		lhead = lhead->next;
		i++;
	}

	lhead->prev->next = lhead->next;
	if (lhead->next != NULL)
		lhead->next->prev = lhead->prev;
	free(lhead);
	return (1);
}
