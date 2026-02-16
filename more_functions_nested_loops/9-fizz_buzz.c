#include <stdio.h>

/**
 * main - main function, (hopefully) passes the fizzbuzz test
 * Return - main always returns 0 on succsess
 */
int main (void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n == 1)
		{
			printf("%d", n);
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
