#include "main.h"

/**
 * swap_int - given two integers swap the values they are holding
 * @a: param 1
 * @b: param 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
