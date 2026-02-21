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
 * _strcat - concatinate src to dest
 * @dest: string to add to
 * @src: string to add to dest
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int x = _strlen(dest);
	int y = 0;

	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
