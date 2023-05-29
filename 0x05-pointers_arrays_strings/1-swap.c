#include "main.h"
/**
 * swap_int - the function name that swaps
 * @a: one of the parameters that gets passed
 * @b: the parameter that swaps with the former
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
