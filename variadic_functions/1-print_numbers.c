#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: print between each number
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i  = 0;
	va_list varg;

	va_start(varg, n);

	while (i < n)
	{
		printf("%d%s", va_arg(varg, int), separator);
		i++;
	}

	va_end(varg);
}
