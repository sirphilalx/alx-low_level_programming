#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the function that when called, sums up all its arguments
 * @n: the first argument that counts the loop in tandem
 * with the numnber of supplied arguments
 * @...: the variable number of parameters
 *
 * Return: if n == 0 return 0 or else, return the sum of all para
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
