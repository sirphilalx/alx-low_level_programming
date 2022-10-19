#include "main.h"

/**
 * print_sign - this function prints the sign associated to a number
 * @n: this is the variable
 * Return: returns 1 if > 0, 0 if == to 0 and returns -1 if > 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
