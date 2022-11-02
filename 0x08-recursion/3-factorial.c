#include <stdio>

/**
 * factorial - the function that return n!
 * @n: the number whose factorial will be returned
 * Return: retrn -1 < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
