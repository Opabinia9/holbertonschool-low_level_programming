#include "main.h"

/**
 * _strpbrk - find the first match in s from accept
 * @s: string to search
 * @accept: list of characters to search for
 * Return: pointer to first match in s
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y;

	while (s[x])
	{
		y = 0;
		while (accept[y])
		{
			if (s[x] == accept[y])
			{
				return (&s[x]);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
