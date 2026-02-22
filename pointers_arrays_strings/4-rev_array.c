#include "main.h"

/**
 * reverse_array - reverse the order of a given array
 * @a: array to reverse
 * @n: length of array to reverse
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int y;

	n--;
	while (x < n)
	{
		y = a[n];
		a[n] = a[x];
		a[x] = y;
		x++;
		n--;
	}
}
