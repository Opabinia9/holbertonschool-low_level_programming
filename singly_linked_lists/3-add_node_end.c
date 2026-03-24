#include "lists.h"

/**
 * add_node_end - add node to end of list, DO NOT UPDATE HEAD
 * @head: head that will NOT BE UPDATED
 * @str: string to give to new list_t node
 * Return: address to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *pre = *head;
	list_t *h = malloc(sizeof(list_t));

	if (!h)
		return (NULL);

	for (i = 0; str[i]; )
		i++;
	h->next = NULL;
	h->str = strdup(str);
	h->len = i;
	if (*head == NULL)
	{
		*head = h;
	}
	else
	{
		while (pre->next != NULL)
		{
			pre = pre->next;
		}
		pre->next = h;
	}

	return (h);
}	
