#include "main.h"
/**
 * _checker - the checker for this function
 * @a: the interger
 * @b: the integer
 * Return: an integer
 */
int _checker(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (b > a / 2)
		return (1);
	else
		return (_checker((a + 1), b));
}

/**
 * is_prime_number - function checks if the number is a prime
 * @n: the integer
 * Return: an interger
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_checker(2, n));
}
