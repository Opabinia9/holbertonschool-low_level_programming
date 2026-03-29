#include "lists.h"

/**
 * add_dnodeint_end - add new node to end of linked list
 * @head: pointer to pointer to head of linked list
 * @n: value for new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lhead = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (lhead)
	{
		while (lhead->next)
		{
			lhead = lhead->next;
		}
		node->prev = lhead;
		lhead->next = node;
	}
	else
	{
		node->prev = NULL;
		*head = node;
	}
	return (node);
}
