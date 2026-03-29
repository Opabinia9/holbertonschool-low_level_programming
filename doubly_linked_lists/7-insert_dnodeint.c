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
	dlistint_t *prev - NULL;

	while (i < idx)
	{
		if (!head)
			return (NULL);
		prev = head;
		head = head->next;
		i++;
	}
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = head;
	node->prev = prev;
	if (node->prev)
		node->prev->next = node;
	if (node->next)
		node->next->prev = node;
	return (node);
}
