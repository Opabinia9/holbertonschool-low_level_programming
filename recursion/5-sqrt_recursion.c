#include "main.h"

/**
 * checker - helper function for calculating square root
 * @n: number to subtract form base
 * @base: remains of starter number
 * @count: number of times n has been taken from base
 * Return: count
 */
int checker(int n, int base, int count)
{
	if (base == 0)
	{
		return (count);
	}
	else if (base < 0)
	{
		return (-1);
	}
	else
	{
		return (checker(n + 2, base - n, count + 1));
	}

}
/**
 * _sqrt_recursion - wrapper for checker that complies with task rules
 * @n: number to calculate square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n, 0));
}
