#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: the array given
 *@n: the number of element in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
