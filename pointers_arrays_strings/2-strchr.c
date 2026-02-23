#include "main.h"

/**
 * _strchr - find the first occurence of c in s
 * @s: string to search
 * @c: character to search for
 * Return: pointer to the first ocurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (&*s);
		}
		s++;
	}
	return ('\0');
}
