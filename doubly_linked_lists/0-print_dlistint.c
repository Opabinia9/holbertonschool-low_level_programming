#include "lists.h"

/**
 * print_dlistint - print the value of each node from a linked list
 * @h: pointer to head node of list
 * Return: number of nodes in list
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
