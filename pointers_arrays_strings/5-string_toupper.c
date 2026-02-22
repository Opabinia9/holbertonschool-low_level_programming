#include "main.h"

/**
 * string_toupper - capitalizr a string
 * @s: string to capitalize
 * Return: pointer to s
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] >= 'a')
		{
			s[x] = s[x] - 32;
		}
		x++;
	}
	return (s);
}
