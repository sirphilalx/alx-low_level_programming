#include "main.h"
/**
 * _strncat - the function that concats a certain number
 * @dest: the destination
 * @src: the source
 * @n: the number of strings that will get copied
 * Return: returns the destination string after concat
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		if (j != n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		else
		{
			break;
		}
	}
	dest[i] = '\0';
	return (dest);
}
