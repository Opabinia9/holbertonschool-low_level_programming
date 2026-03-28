#include "lists.h"

/**
 * add_dnodeint - add new node to list and update head
 * @head: current head node
 * @n: value of node node n member
 * Return: pointer to new head of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	if (*head)
		(*head)->prev = node;
	else
		node->prev = NULL;
	*head = node;
	return (*head);
}
