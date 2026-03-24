#include "lists.h"

/**
 * list_len - return the length of a linked list
 * @h: list to get the length of
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
