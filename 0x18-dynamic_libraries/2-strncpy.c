#include "main.h"

/**
 * *_strncpy - function to copy source to dest
 * @dest: destination string
 * @src: source string
 * @n: max count
 * Return: return destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
