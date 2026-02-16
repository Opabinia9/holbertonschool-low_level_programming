#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size of the square to print
 */
void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		h = 0;
		while (h < size)
		{
			w = 0;
			while (w < size)
			{
				_putchar('#');
				w++;
			}
			h++;
			_putchar('\n');
		}
	}
}
