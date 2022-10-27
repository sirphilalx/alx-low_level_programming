#include "main.h"

/**
 * _strncat - the function that concatenates with the n 
 * @dest: the first integer
 * @src: the source string
 * Return: returns 1 on success
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
