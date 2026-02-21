#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compairs ascii values of a string and returns the first diff
 * @s1: the first value to compair
 * @s2: the second string to compair
 * Return: the diffrence in ascii value
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y;

	while (s1[x] && s2[x])
	{
		y = s1[x] - s2[x];
		if (y)
		{
			return (y);
		}
		x++;
	}
	if (!s1[x] && !s2[x])
	{
		return (0);
	}
	else if (!s1[x] && s2[x])
	{
		return (s2[x] - s1[x]);
	}
	else
	{
		return (s1[x] - s2[x]);
	}
}
