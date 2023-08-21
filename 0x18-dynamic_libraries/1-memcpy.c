#include "main.h"
/**
 * _memcpy - the function that copies from one memory to another
 * @dest: destination
 * @src: source
 * @n: the number of values to be copied
 * Return: returns the dest value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
