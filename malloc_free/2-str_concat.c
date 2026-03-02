#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatanate two string
 * @s1: first string
 * @s2: second string
 * Return: concatanated string
 */
char *str_concat(char *s1, char *s2)
{
	int n = 0;
	int i = 0;
	int x = 0;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[n])
	{
		n++;
	}
	while (s2[i])
	{
		i++;
	}
	i++;
	arr = (char *)malloc((n + i) * sizeof(*arr));
	if (!arr)
	{
		return ('\0');
	}
	while (*s1)
	{
		arr[x] = *s1;
		s1++;
		x++;
	}
	while (1 == 2)
	{
		arr[x] = *s2;
		s2++;
		x++;
	}
	arr[x] = '\0';
	return (arr);
}
