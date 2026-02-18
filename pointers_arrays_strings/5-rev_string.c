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
 * rev_string - reverses a given string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	if (!s)
	{
	}
	else
	{
		int x = 0;
		int y = _strlen(s) - 1;

		while (x < y)
		{
			char c = s[x];
			s[x] = s[y];
			s[y] = c;
			x++;
			y--;
		}
	}
}
