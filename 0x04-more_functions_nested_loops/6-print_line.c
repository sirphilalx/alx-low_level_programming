#include "main.h"

/**
 * print_line - this prints out the '_' many times
 * @n: the number of times the char should be printed
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
