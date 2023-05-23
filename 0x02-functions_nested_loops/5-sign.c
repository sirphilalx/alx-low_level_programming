#include "main.h"
/**
 * print_sign - prints a sign based on the argument passed
 * @n: the argument that is to be checked
 * Return: 1 if n is > 1, 0 if n == 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
