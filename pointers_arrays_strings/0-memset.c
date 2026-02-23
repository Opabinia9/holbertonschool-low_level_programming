#include "main.h"

/**
 * _memset - overwrite n bytes of s with b
 * @s: string to overwrite
 * @b: character to overwrite s with
 * @n: number of bytes of s to overwrite
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (s[x] && x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
