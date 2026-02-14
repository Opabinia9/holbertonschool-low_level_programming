#include "main.h"

/**
 * print_min - prints 0 - 60
 * with a give first and last
 * hour digit prepended
 * @h1: the firt digit how the hour
 * @h2: the second digit of the hour
 */
void print_min(int h1, int h2)
{
	int m1, m2;

	m1 = 0;
	while (m1 < 6)
	{
		m2 = 0;
		while (m2 < 10)
		{
			_putchar('0' + h1);
			_putchar('0' + h2);
			_putchar(':');
			_putchar('0' + m1);
			_putchar('0' + m2);
			_putchar('\n');
			m2++;
		}
		m1++;
	}
}

/**
 * jack_bauer - function that prints every minute of the day
 */
void jack_bauer(void)
{
	int h1, h2;

	h1 = 0;
	while (h1 < 3)
	{
		if (h1 < 2)
		{
			h2 = 0;
			while (h2 < 10)
			{
				print_min(h1, h2);
				h2++;
			}
			h1++;
		}
		else
		{
			h2 = 0;
			while (h2 < 4)
			{
				print_min(h1, h2);
				h2++;
			}
			h1++;

		}
	}

}
