#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers from
 * n to 98, up or down
 * @n: the number to start at
 */
void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
