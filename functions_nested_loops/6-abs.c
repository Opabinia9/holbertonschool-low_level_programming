#include "main.h"

/**
 * _abs - computes the absolute value
 * of and integer
 * @a: variable to be made positve
 * Return: the int as a positve number
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
