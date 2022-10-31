#include "main.h"

/**
 * print_chessbaord - the function that prints an array of 2 dimension
 * @a: the chessboard printed
 */

void print_chessboard(char (*a)[8])
{
	int index1;
	int index2;

	for (index1 = 0; a[index1][7]; index1++)
	{
		for (index2 = 0; index2 < 8; index2++)
			_putchar(a[index1][index2]);

		_putchar('\n');
	}
}
