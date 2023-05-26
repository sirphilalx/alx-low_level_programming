#include "main.h"
/**
 * print_line - the function that draws the line
 * @n: the integar that multiplies the line
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
