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
 * print_rev - prints a string in revers, with newline
 * @s: string to print
 */
void print_rev(char *s)
{
	int a;

	if (s == "")
	{
		_putchar('\n');
	}
	else
	{
		a = _strlen(s);
		do {
			a--;
			_putchar(s[a]);
		} while (a != 0);
		_putchar('\n');
	}
}
