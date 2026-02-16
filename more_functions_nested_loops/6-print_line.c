#include "main.h"
/**
 * print_line - function to print a vertical line
 * @n: the width of the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
