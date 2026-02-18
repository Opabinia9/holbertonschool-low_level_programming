#include "main.h"
/**
 * _strlen - returns the length of a given string
 * @s: string to check
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * puts_half - prints half a given string, with a newline
 * @str: string to half print
 */
void puts_half(char *str)
{
	int x;

	x = _strlen(str);
	if (x % 2 == 0)
	{
		x = x / 2;
	}
	else
	{
		x = (x + 1) / 2;
	}
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
}
