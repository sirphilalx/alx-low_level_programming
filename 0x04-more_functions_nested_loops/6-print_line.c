#include "main.h"

/**
 * print_line - this prints out the '_' many times
 * @n: the number of times the char should be printed
 */

void print_line(int n)
{
	if (n == 0)
		_putchar('\n');
	else
		_putchar('_' * n);
	_putchar('\n');
}
