#include "main.h"

int is_prime_number(int n);

/**
 * is_prime_number -  checks if a number is divisible
 * @n: the number to be checked
 * Return: if success 0 otherwise 1
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - prime checker
 * @n: number
 * @i: iterator
 * Return: 0 or 1
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (i);
	return (checkprime(n, i + 1));
}
