#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted
 *		array of integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index of the found value or -1 if value was not found.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, left, right, middle;

	if (array == NULL || !size || !value)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		middle = (left + right) / 2;

		i = left;
		while (i <= right)
		{
			printf("%d", array[i++]);
			if (i <= right)
				printf(", ");
		}
		printf("\n");

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

