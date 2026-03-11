#include "3-calc.h"

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
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (s == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && !b)
	{
		printf("Error\n");
		exit(100);
	}

	c = s(a, b);

	printf("%d\n", c);
	return (0);
}
