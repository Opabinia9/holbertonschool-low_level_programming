#include "main.h"
/**
 * _strlen - returns the length of a given string
 * @s: string to check
 * Return: length of string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * _strncpy - copies n of src to dest filling the rest with null
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of didgits to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y = _strlen(src);
	int x = 0;

	while (x < n)
	{
		if (x < y)
		{
			dest[x] = src[x];
		}
		else
		{
			dest[x] = '\0';
		}
		x++;
	}
	return (dest);
}
