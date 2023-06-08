#include "main.h"
/**
 * factorial - the function that gets called
 * @n: the integar
 * Return: return -1 to indicate an error otherwise return 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
