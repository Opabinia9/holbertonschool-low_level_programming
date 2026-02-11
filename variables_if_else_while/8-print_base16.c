#include <stdio.h>

/**
 * main - this is the main function
 * Return: always 0
 */
int main(void)
{
	char a = 'a';
	char n = '0';

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
