#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of a string, not includeing '\0'
 * @s: string to mesure
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

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
	n = _strlen(s1);
	i = _strlen(s2);
	arr = (char *)malloc((n + i + 1) * sizeof(*arr));
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
	while (*s2)
	{
		arr[x] = *s2;
		s2++;
		x++;
	}
	arr[x] = '\0';
	return (arr);
}
