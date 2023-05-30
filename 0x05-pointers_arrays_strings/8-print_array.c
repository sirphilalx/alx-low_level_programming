#include <stdio.h>
#include "main.h"
/**
 * print_array - the function that gets array printed
 * @a: the array
 * @n: the number of array elements to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
