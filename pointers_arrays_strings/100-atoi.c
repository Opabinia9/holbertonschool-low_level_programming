#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: the converted int
 */
int _atoi(char *s)
{
	int m = 0;
	int p = 0;
	int res = 0;
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			res = res * 10 + (s[x] - '0');
		}
		else if (res != 0)
		{
			break;
		}
		else if (s[x] == '-')
		{
			m++;
		}
		else if (s[x] == '+')
		{
			p++;
		}
		x++;
	}

	if (res == 0)
	{
		return (0);
	}
	else if (p >= m)
	{
		return (res);
	}
	else
	{
		return (res * -1);
	}
}
