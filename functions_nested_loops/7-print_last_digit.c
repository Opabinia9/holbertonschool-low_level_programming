#include "main.h"

/**
 * print_last_digit - function to return
 * the last digit of n
 * @n: the value to get the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n);
	return (n);
}
