#include "main.h"

/**
 * set_bit - this function sets bits
 * @n: the first parameter
 * @index: the second parameter
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}

	*n |= (1 << index);

	return (1);
}
