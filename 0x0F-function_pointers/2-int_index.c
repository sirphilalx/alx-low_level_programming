#include "function_pointers.h"
/**
 * int_index - the function that returns the result of a comparison
 * @size: indicates the size of the array
 * @array: the array of integers that is being searched
 * @cmp: the pointer to a function that does the comparison
 *
 * Return: returns the index of a match otherwise returns -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
