#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;
	int x = 0;
	int word = 0;
	char delimiter[] = {' ', 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		if ((s[x] >= 'A' && s[x] <= 'Z') || (s[x] >= 'a' && s[x] <= 'z'))
		{
			if (!word && (s[x] >= 'a' && s[x] <= 'z'))
			{
				s[x] = s[x] - 32;
			}
			word = 1;
			i = 0;
		}
		else
		{
			while(delimiter[i])
			{
				if (s[x] == delimiter[i])
				{
					word = 0;
					break;
				}
				i++;
			}
		}
		x++;
	}
	return (s);
}
