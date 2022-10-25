#include "main.h"
#include <stdio.h>

/**
 * print_array - the function
 * @a: the first int
 * @n: the second n
 * Return 0
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
