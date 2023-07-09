#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function
 * @b: the binary
 *
 * Return: return the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		value = value << 1;
		value |= (b[i] - '0');
		i++;
	}

	return (value);
}
