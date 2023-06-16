#include <stdlib.h>
#include "main.h"

/**
 * array_range - contains all the values from min to max
 * @min: the first integar argument
 * @max: the second integar argument
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int len;

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);

	if (!ptr || min > max)
		return (NULL);


	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
