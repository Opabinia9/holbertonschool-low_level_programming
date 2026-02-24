#include "main.h"

/**
 * _strspn - returns the number of consecutive
 * chacters in s that are also in accept
 * @s: string to check
 * @accept: list of chacters to look fir
 * Return: number of consecutive matching characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y;
	int z = 0;

	while (*s)
	{
		y = 0;
		while (accept[y])
		{
			if (*s == accept[y])
			{
				x++;
				z++;
				break;
			}
			z = 0;
			y++;
		}
		if (!z && x)
		{
			return (x);

		}
		s++;
	}
	return (x);
}
