#include "main.h"

/**
 * *_strcat - function pointer to concatenate two strings
 * @dest: destination string
 * @src: src string to append to end of destination string
 * Return: returns the appended destination pointer
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	for (src_length = 0; src[src_length] != '\0'; ++src_length, ++dest_length)
	{
		dest[dest_length] = src[src_length];
	}
	dest[dest_length] = '\0';
	return (dest);
}
