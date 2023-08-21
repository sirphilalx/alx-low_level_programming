#include "main.h"

/**
 * *_strncat - function pointer to concatenate two strings
 * @dest: destination string
 * @src: src string to append to end of destination string
 * @n: interger to show the max characters to add from src
 * Return: returns the appended destination pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (src_len = 0; src[src_len] != '\0' && src_len < n; src_len++)
	{
		dest[dest_len + src_len] = src[src_len];
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}
