#include "main.h"
#include <stdlib.h>



char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory space for an array of nmemb elements
 * of size bytes each
 * @nmemb: the number of elements in the array
 * @size: the size of each member of elements in the array
 *
 * Return: returns the pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptrArr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptrArr = malloc(size * nmemb);

	if (ptrArr == NULL)
		return (NULL);

	_memset(ptrArr, 0, nmemb * size);

	return (ptrArr);
}


/**
 * _memset - fills memory space with a constant byte
 * @s: memory area to be filled
 * @b: character to copy
 * @n: the number of times to fill the space
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
