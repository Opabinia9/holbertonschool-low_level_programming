#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the src string to the dest string
 * @src: string to copy
 * @dest: string to copy to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = src[x];
	return (dest);
}
