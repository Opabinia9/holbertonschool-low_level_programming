#include "main.h"

/**
 * _atoi -convert a string to an integer
 * @s: string to convert
 * return: the converted int
 */
int _atoi(char *s)
{
	int m = 0;
	int p = 0;
	int res = 0;
	int x = 0;

	while (s[x] != '\0')
	{
		char c = s[x];

		if (c >= '0' && c <= '9')
		{
			res = res * 10 + (c - '0');
		}
		else if (res != 0)
		{
			break;
		}
		else if (c == '-')
		{
			m++;
		}
		else if (c == '+')
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
