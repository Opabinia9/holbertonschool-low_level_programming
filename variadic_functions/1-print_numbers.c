#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a newline
 * @separator: print between each number
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i  = 1;
	va_list varg;

	va_start(varg, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		separator = "";
	while (i < n)
	{
		printf("%d%s", va_arg(varg, int), separator);
		i++;
	}
	printf("%d\n", va_arg(varg, int));

	va_end(varg);
}
