#include "main.h"

/**
 * _strncpy - copies a string with n
 * @dest: copy to
 * @src: copy from
 * @n: the integer
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		j++;
	}
	while (i < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}	
