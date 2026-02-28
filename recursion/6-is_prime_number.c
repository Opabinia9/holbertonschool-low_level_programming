#include "main.h"

/**
 * in_prime - calculates if n is a prime
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime, else 0
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - calculate if n is a prime
 * @n: number to check
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
