#include "variadic_functions.h"

/**
 * print_all - print int, float, char or string
 * @format: type to print
 */
void print_all(const char * const format, ...)
{
	int i, n;
	char x[3] = {'\0', '\0', '\0'};
	va_list varg;
	op_t ops[] = {
		{"c", cprint},
		{"i", iprint},
		{"f", fprint},
		{"s", sprint},
		{NULL, NULL}
	};

	va_start(varg, format);
	i = 0;
	while (format[i])
	{
		n = 0;
		while (ops[n].op)
		{
			if (format[i] == ops[n].op[0])
			{
				printf("%s", x);
				ops[n].f(varg);
				x[0] = ',';
				x[1] = ' ';
				break;
			}
			n++;
		}
		i++;
	}
	va_end(varg);
	printf("\n");
}

/**
 * cprint - print char
 * @vargc: char to print
 */
void cprint(va_list vargc)
{
	printf("%c", va_arg(vargc, int));
}
/**
 * iprint - print int
 * @vargi: int to print
 */
void iprint(va_list vargi)
{
	printf("%i", va_arg(vargi, int));
}
/**
 * fprint - print float
 * @vargf: float to print
 */
void fprint(va_list vargf)
{
	printf("%f", va_arg(vargf, double));
}
/**
 * sprint - print string
 * @vargs: string to print
 */
void sprint(va_list vargs)
{
	char *s = va_arg(vargs, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

