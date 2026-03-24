#include "lists.h"

/**
 * add_node - 
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
