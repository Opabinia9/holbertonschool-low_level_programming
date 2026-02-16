#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 ten times, newline seperated
 */
void more_numbers(void)
{
	int n;
	int c = 0;

	while (c < 11)
	{
		n = 0;
		while (n < 15)
		{
			if (n > 9 && n < 20)
			{
				_putchar('1');
			}
			_putchar('0' + (n % 10));
			n++;
		}
		_putchar('\n');
		c++;
	}

}
