#include "main.h"

/**
 * get_bit - the function
 * @n: first parameter
 * @index: second index
 *
 * Return: returns the bit at index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
