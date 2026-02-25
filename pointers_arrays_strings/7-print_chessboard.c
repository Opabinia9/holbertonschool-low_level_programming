#include "main.h"

/**
 * print_chessboard - prints and 8x8 chessboard
 * @a: array of board to print
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y;

	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
