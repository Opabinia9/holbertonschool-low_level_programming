#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the size of the triangle to print
 */
void print_triangle(int size)
{
	int i, n, x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		n = size - 1;
		while (i < size)
		{
			for (x = 0; x < n; x++)
			{
				_putchar(' ');
			}
			for (y = 0; y <= i; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
			n--;
			i++;
		}
	}
}
