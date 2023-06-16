#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - the program name
 * @b: the argument of the program
 * Return: return the pointer to the memory space created
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
