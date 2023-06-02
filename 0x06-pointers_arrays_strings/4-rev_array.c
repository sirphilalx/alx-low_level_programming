#include "main.h"
/**
 * reverse_array - this function reverses an array
 * @a: is the array to be reversed
 * @n: is the number of elements of the array to be used
 * for the operation
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
