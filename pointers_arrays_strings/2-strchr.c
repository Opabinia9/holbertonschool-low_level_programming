#include "main.h"

/**
 * _strchr - find the first occurence of c in s
 * @s: string to search
 * @c: character to search for
 * Return: pointer to the first ocurence of c in s
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
		x++;
	}
	return ('\0');
}
