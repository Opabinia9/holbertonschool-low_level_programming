#include "lists.h"

/**
 * dlistint_len - return the number of nodes in a linked list
 * @h: head node
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
