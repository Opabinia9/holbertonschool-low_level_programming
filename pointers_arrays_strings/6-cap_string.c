#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i;
	int x = 0;
	int word = 0;
	int del = 0;
	char d[] = {' ', 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		i = 0;
		while (d[i])
		{
			del = 0;
			if (s[x] == d[i])
			{
				word = 1;
				del = 1;
				break;
			}
			i++;
		}
		if (!del)
		{
			if (word == 1 && (s[x] >= 'a' && s[x] <= 'z'))
			{
				s[x] = s[x] - 32;
			}
			word++;
		}
		x++;
	}
	return (s);
}
