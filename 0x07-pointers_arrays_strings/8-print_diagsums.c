#include "main.h"
#include <stdiio.h>

/**
 * print_diagsums - print the sum of diagonal
 * @a: the diagonal
 * @size: the size of the diagonal
 */

void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size
	}

	printf("%d, %d\n", sum1, sum2);
}
