#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: the max bytes to use
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned in i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
