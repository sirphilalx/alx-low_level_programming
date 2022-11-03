#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible -  checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return: if success 0 otherwise 1
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}


/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked
 * Return: returns 0 on success otherwise 0
 */

int is_prime_number(int n)
{
	if (n % 1 == 0 && n % n == 0)
	{
		return (1)

