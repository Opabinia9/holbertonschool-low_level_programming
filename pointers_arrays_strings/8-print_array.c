#include "stdio.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: array to print from
 * @n: number of elemnts to print
 */
void print_array(int *a, int n)
{
	int x = 0;

	if (n <= 0)
	{
		printf("\n");
	}
	{
		while (x < n)
		{
			if (x == n - 1)
			{
				printf("%d\n", a[x]);
			}
			else
			{
				printf("%d, ", a[x]);
			}
			x++;
		}
	}
}
