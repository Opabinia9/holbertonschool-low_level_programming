#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at idx
 * @h: current head
 * @idx: index for new node
 * @n: data for new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *node;
	dlistint_t *head = *h;

	while (i < idx)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = head;
	if (node->next)
		node->prev = node->next->prev;
	else
		node->prev = NULL;
	if (node->prev)
		node->prev->next = node;
	if (node->next)
		node->next->prev = node;
	return (node);
}
