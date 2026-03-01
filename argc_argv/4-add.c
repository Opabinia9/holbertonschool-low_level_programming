#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds numbers in command line arguments
 * @argc: number of command line arguments
 * @argv: array of command line argumnets
 * Return: sum of numbers
 */
int main(int argc, char *argv[])
{
	int n = 0;
	int i, x, y;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y])
		{
			if (isalpha(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		x++;
	}

	while (n < argc)
	{
		i += atoi(argv[n]);
		n++;
	}
	printf("%d\n", i);
	return (0);
}
