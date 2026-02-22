#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int x = 0;
	int word = 0;

	while (s[x])
	{
		if ((s[x] >= 'A' && s[x] <= 'Z') || (s[x] >= 'a' && s[x] <= 'z'))
		{
			if (!word && (s[x] >= 'a' && s[x] <= 'z'))
			{
				s[x] = s[x] - 32;
			}
			word = 1;
		}
		else
		{
			word = 0;
		}
		x++;
	}
	return (s);
}
