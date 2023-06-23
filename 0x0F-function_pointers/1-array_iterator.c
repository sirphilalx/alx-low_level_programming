#include "function_pointers.h"
/**
 * array_iterator - the name of the function that itirates and takes action
 * on the array elements
 * @array: the array
 * @size: calculates the size of an array
 * @action: the acrion function that works on the array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
