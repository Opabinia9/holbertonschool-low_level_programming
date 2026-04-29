#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

/**
 * main - generate a key with a total ascii value of 2772
 * Return: 0
 */
int main(void)
{
	int asc = 2772;
	int c;

	srand(time(NULL));
	while (asc > 64)
	{
		c = (((rand() % 95) % asc) + 32);
		asc -= c;
		printf("%c", c);
	}
	printf("%c", asc);
	return (0);
}
