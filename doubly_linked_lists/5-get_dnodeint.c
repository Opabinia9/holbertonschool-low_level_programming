#include "lists.h"

/**
 * get_dnodeint_at_index - get a node from a specific index in a linked list
 * @head: head of list
 * @index: index to get
 * Return: pointer to node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		if (!head)
			return (NULL);
		i++;
	}

	return (head);
}
