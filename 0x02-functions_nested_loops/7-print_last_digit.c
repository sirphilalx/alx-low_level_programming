#include "main.h"

/**
 * print_last_digit - this program prints the last digit of any given number
 * @n: the number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (0);
}
