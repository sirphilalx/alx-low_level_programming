#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted array of
 *		integers using the Jump search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @size: is the number of elements in array
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	/* Block to be jumped */
	size_t step = sqrt(size);
	size_t i, jump;

	if (array == NULL || size == 0 || !value)
		return (-1);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = fmin(size - 1, jump);
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}

