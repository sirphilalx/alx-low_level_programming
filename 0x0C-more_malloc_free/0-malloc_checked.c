#include "main.h"

/**
* malloc_checked - uses malloc to allocate space in the heap memory
* @b: the integer to be checked
* Return: returns a value
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
