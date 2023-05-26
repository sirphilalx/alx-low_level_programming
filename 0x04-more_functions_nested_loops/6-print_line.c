#include "main.h"
/**
 * print_line - the function that draws the line
 * @n: the integar that multiplies the line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
