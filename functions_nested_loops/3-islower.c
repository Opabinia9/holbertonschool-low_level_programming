#include "main.h"

/**
 * _islower - case checker
 * @c: - c is the paramater to check
 * if its lowercase or not
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
