#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*s)(int, int);
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = get_op_func(argv[2]);

	if (s == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2][0] == '/' || argv[2][0] == '%')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = s(a, b);

	printf("%d\n", c);
	return (0);
}
