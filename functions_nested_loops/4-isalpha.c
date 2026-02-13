#include "main.h"
/**
 * _isalpha - checks if c is a letter
 * @c: the parameter to check if alphabetical
 * Return: 1 if c is a letter,
 * otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
