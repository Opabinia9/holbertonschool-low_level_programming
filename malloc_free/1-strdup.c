#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a copy of str
 * @str: string to copy
 * Return: pointer to a copy of str
 */
char *_strdup(char *str)
{
	int n = 0;
	int i = 0;
	char *arr;

	if (!str)
	{
		return ('\0');
	}
	while (str[n])
	{
		n++;
	}
	n++;
	arr = (char *)malloc(n * sizeof(*arr));

	while (i < n)
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
