#include "lists.h"

/**
 * print_dlistint - print the value of each node from a linked list
 * @h: pointer to head node of list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	int i = 0;
	char *str;

	while (h)
	{
		str = itoa(h->n);
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		free(str);
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * itoa - convert an int to a string
 * @n: int to convert
 * Return: pointer to string
 */
char *itoa(int n)
{
	int count = 0;
	int i;
	char *str;

	if (!n)
	{
		str = malloc(2 * sizeof(*str));
		str[0] = '0';
		str[1] = '\0';
	}
	else if (n < 0)
	{	
		n *= -1;
		for (i = n; i; i /= 10)
			count++;
		count++;
		str =  malloc((count + 1) * sizeof(*str));
		if (!str)
			return (NULL);
		str[count] = '\0';
		for (i = n; i; i /= 10)
			str[--count] = '0' + i % 10;
		str[0] = '-';
	}
	else
	{
		for (i = n; i; i /= 10)
			count++;
		str =  malloc((count + 1) * sizeof(*str));
		if (!str)
			return (NULL);
		str[count] = '\0';
		for (i = n; i; i /= 10)
			str[--count] = '0' + i % 10;
	}
	return (str);
}
