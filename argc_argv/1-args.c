#include <stdio.h>

/**
 * main - print number of command line agruments passed
 * @argc: number of command line arguments passed
 * @argv: array of command line arguments passed
 * Return: 0 on succsess
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
