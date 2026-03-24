#include "lists.h"

size_t print_list(const list_t *h)
{
	unsigned int i;
	int n = 0;
	char *nil = "(nil)";

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
			index[1] = '0' + h->len; 
			for (i = 0; index[i]; i++)
				_putchar(index[i]);
			for (i = 0; h->str[i]; i++)
				_putchar(h->str[i]);
		}
		_putchar('\n');
		h = h->next;
		n++;
	}

	return (n);
}
