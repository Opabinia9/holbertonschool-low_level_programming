#include <stdio.h>

/**
 * main - print all command line agruments
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
