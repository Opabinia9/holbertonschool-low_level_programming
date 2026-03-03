#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2D array inizalised with 0s
 * @width: size of each row in the array
 * @height: size of each collum in the array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x = 0;
	int y = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(*arr));

	if (!arr)
	{
		return (NULL);
	}
	while (x < height)
	{
		arr[x] = (int *)malloc(width * sizeof(int));
		if (!arr[x])
		{
			for (y = 0; y < x; y++)
				free(arr[y]);
			free(arr);
			return (NULL);
		}
		x++;
	}
	x = 0;
	while (x < height)
	{
		y = 0;
		while (y < width)
		{
			arr[x][y] = 0;
			y++;
		}
		x++;
	}
	return (arr);
}
