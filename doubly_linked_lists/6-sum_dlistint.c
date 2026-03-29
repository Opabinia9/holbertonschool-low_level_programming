#include "lists.h"

/**
 * sum_dlistint - add all n values from linked list
 * @head: head of linked list
 * Return: sum of all n in linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
