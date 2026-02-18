#include "main.h"

/**
 * puts2 - prints every other character followed by newline
 * @str: string to print
 */
void puts2(char *str)
{
	int x = 0;

	if (str)
	{
		while (str[x] != '\0')
		{
			if (x % 2 == 0)
			{
				_putchar(str[x]);
			}
			x++;
		}
	}
	_putchar('\n');
}
