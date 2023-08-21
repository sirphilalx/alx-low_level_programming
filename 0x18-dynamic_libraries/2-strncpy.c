#include "main.h"
/**
 * _strncpy - the function name
 * @dest: the destination
 * @src: the source
 * @n: the number of string to be copied from src to dest
 * Return: retuns the dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
