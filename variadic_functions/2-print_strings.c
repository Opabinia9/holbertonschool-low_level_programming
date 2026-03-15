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
	char *v;

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
		v = va_arg(varg, char*);
		if (v == NULL)
			v = "(nil)";
		printf("%s%s", v, separator);
		i++;
	}
	v = va_arg(varg, char*);
	if (v == NULL)
		v = "(nil)";
	printf("%s\n", v);

	va_end(varg);
}
