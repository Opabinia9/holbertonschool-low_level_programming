#include "variadic_functions.h"

/**
 * print_strings - print given strings
 * @separator: print between strings
 * @n: number of stringss to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s%s", va_arg(varg, char*), separator);
		i++;
	}
	printf("%s\n", va_arg(varg, char*));

	va_end(varg);
}
