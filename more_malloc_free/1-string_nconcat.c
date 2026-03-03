#include "main.h"
#include <stdlib.h>

/**
 * string_parser - parse a string,
 * replacing null with "" and returning it's length
 * @s: string to parse
 * Return: length of string
 */
int string_parser(char *s)
{
	int n = 0;

	if (s == NULL)
	{
		s = "";
	}
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
	int x = string_parser(s1);
	int y = string_parser(s2);
	int i;
	unsigned int m;
	char *arr;

	arr = malloc((x + y + 1) * sizeof(*arr));

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
