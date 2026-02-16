#include "main.h"

/**
 * print_numbers - prints number 0-9 with newline
 */
void print_numbers(void)
{
	char c = '0';

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
