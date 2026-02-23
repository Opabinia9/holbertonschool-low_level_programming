#include "main.h"

/**
 * _strchr -
 * Return: 
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] == c)
		{
			return(&s[x]);
		}
		x++;
	}
	return ('\0');
}
