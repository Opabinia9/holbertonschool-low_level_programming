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

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < (idx - 1))
	{
		head = head->next;
		if (!head)
			return (NULL);
		i++;
	}
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = head->next;
	node->prev = head;
	node->prev->next = node;
	if (node->next)
		node->next->prev = node;
	return (node);
}
