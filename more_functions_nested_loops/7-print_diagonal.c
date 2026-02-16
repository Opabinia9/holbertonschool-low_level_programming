#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			for (x = 0; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
