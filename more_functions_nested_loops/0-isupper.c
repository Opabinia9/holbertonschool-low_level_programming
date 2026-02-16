#include "main.h"

/**
 * _isupper - checks if c is uppercase
 * @c: parramater to check
 * Return: 1 if upper else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
