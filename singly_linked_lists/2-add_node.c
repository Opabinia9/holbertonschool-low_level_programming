#include "lists.h"

/**
 * add_node - add node AND UPDATE HEAD
 * @head: current head that will be UPDATED
 * @str: string to give to new list_t node
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *h = malloc(sizeof(list_t));

	if (!h)
		return (NULL);

	for (i = 0; str[i]; )
		i++;
	h->next = *head;
	h->str = strdup(str);
	h->len = i;
	*head = h;

	return (h);
}
