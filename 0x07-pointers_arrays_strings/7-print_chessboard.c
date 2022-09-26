#include "main.h"
/**
*print_chessboard - prints the chessboard
*@a: array
*/
void print_chessboard(char (*a)[8])
{
	int b, d;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][d]);
		}
		_putchar('\n');
	}
}
