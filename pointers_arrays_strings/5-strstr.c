#include "main.h"

/**
 * _strstr - find the first ocurence of neeed;e in haystack
 * @haystack: string to search
 * @needle: string to find
 * Return: pointer to first match of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y;
	int match;

	if (haystack[0] == "")
	{
		return (haystack);
	}
	while (haystack[x])
	{
		if (haystack[x] == needle[0])
		{
			y = 0;
			match = 1;
			while (needle[y])
			{
				if (!(haystack[x + y] == needle[y]))
				{
					match = 0;
				}
				y++;
			}
			if (match)
			{
				return (&haystack[x]);
			}
		}
		x++;
	}

	return ('\0');
}
