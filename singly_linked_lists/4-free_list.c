#include "lists.h"

/**
 * free_list - free a linked list from head
 * @head: pointer to list struct
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
