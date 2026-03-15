#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list varg;
	unsigned int i = 0;
	int sum = 0;

	va_start(varg, n);

	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(varg, int);
		i++;
	}

	va_end(varg);
	return (sum);
}
