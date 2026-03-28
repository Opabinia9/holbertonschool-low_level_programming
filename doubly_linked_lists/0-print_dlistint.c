#include "lists.h"

/**
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		_putchar('0' + h->n);
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}
