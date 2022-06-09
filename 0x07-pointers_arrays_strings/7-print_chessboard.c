#include "main.h"

/**
 * print_chessboard - prints 8x8 chessboard
 * @a: 2D-array containing chessboard values
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
