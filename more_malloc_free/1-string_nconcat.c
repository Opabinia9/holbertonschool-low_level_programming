#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find the length of a string
 * @s: string to check
 * Return: length of string
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
	{
		n++;
	}
	return (n);
}

/**
 * string_nconcat - concatinate n characters of s2 to s1
 * @s1: first string to concatinate
 * @s2: second string to concatinate
 * @n: number of characters from s2 to add to s1
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, x;
	unsigned int m;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	x = _strlen(s1);
	arr = malloc((x + n + 1) * sizeof(*arr));
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	m = 0;
	while (s2[m] && m < n)
	{
		arr[i] = s2[m];
		i++;
		m++;
	}
	arr[i] = '\0';
	return (arr);
}
