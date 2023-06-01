#include "main.h"
/**
 * _strcat - the function that concatenates
 * @dest: the destination
 * @src: the source that gets appended to the destination
 * Return: returns the final destination value
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
		m++;
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
