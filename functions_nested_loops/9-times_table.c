#include "main.h"

/**
 * print_dd - function for printing double and single
 * digit numbers with _putchar
 * @n: number to print
 */
void print_dd(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(n + '0');
	}
	else
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
/**
 * times_table - prints the times tables up to 9
 */
void times_table(void)
{
	int c, n, r;

	c = 0;
	while (c < 10)
	{
		n = r = 0;
		while (n < 10)
		{
			if (n == 0)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				print_dd(r);
			}
			r += c;
			n++;
		}
		_putchar('\n');
		c++;
	}
}
