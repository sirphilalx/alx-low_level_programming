#include "main.h"
/**
 * _checker - checks for a true square root
 * @a: the first integer
 * @b: the last integer
 * Return: returns an integer
 */
int _checker(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	else
		return (_checker((a + 1), b));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be checked
 * Returns an integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (_checker(1, n));
}
