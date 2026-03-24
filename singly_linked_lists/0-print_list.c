#include "lists.h"

/**
 * print_list - print a linked list
 * @h: list to print
 * Return: length of list
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	int n = 0;
	char *nil = "(nil)";
	char *str;

	while (h)
	{
		char index[] = "[0] ";

		if (h->str == NULL)
		{
			for (i = 0; index[i]; i++)
				_putchar(index[i]);
			for (i = 0; nil[i]; i++)
				_putchar(nil[i]);
		}
		else
		{
			_putchar('[');
			str = itoa(h->len);
			for (i = 0; str[i]; i++)
				_putchar(str[i]);
			free(str);
			_putchar(']');
			_putchar(' ');
			for (i = 0; h->str[i]; i++)
				_putchar(h->str[i]);
		}
		_putchar('\n');
		h = h->next;
		n++;
	}

	return (n);
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
		return (str);
	}
	for (i = n; i; i /= 10)
		count++;
	str =  malloc((count + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	str[count] = '\0';
	for (i = n; i; i /= 10)
		str[--count] = '0' + i % 10;
	return (str);
}
