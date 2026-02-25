#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: matrix to math
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int x = 0;
	int n = size * size - size;
	int y = 0;

	while (i < (size * size))
	{
		x += a[i];
		i += 1 + size;
	}
	while (n >= 0)
	{
		y += a[n];
		n -= size - 1;
	}
	printf("%d, %d\n", x, y);
}
