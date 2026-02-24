#include "main.h"

/**
 * _strpbrk -
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y;
	char *res;

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
	res = s[x] == accept[y] ? &s[x] : '\0';
	return (res);
}
