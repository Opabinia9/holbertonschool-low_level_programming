#include "main.h"
#include <stdio.h>

/**
 * _strcpy -
 * @src:
 * @dest:
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
