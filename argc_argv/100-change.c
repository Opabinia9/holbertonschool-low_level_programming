#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number coins it will take to give you
 * your change from a number of cents
 * @argc: number of args passed
 * @argv: contains number of cents
 * Return: 0 on success else 1
 */
int main(int argc, char **argv)
{
	int cents;
	int change = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int numcoins = 5;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0");
		return (0);
	}

	while (i < numcoins)
	{
		if (cents >= coins[i])
		{
			cents -= coins[i];
			change++;
		}
		if (cents < coins[i])
			i++;
	}
	printf("%d\n", change);
	return (0);
}
