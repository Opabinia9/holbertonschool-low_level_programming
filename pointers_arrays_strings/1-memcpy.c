#include "main.h"

/**
 * _memcpy - copy n bytes of src to dest
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
