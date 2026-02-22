#include "main.h"

/**
 */
char *leet(char *s)
{
	char leet[] = "aAeEoOtTlL";
	char teel[] = "4433007711";
	int x = 0;
	int y;

	while (s[x])
	{
		y = 0;
		while (leet[y])
		{
			if (s[x] == leet[y])
			{
				s[x] = teel[y];
			}
			y++;
		}
		x++;
	}
	return (s);
}
