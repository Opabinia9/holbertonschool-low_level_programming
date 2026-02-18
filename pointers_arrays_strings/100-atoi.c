#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: the converted int
 */
int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int x = 0;

	while (s[x])
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			res = sign * ((res * 10) + (s[x] - '0'));
			sign = 1;
		}
		else if (res != 0)
		{
			break;
		}
		else if (s[x] == '-')
		{
			sign *= -1;
		}
		x++;
	}
	
	return (res);
}
