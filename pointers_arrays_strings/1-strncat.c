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
 * _strncat - concatinate src to dest using max of n from src
 * @dest: string to add to
 * @src: string to add to dest
 * @n: max to take from src
 * Return: the pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = _strlen(dest);
	int y = 0;

	while (src[y] && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
