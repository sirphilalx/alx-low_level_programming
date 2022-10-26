#include "main.c"

/**
 * _strcat -  the function that takes the parameters
 * @dest: the first parameter
 * @src: the second parameter
 * Return: returns apointer to the resulting string, dest
 */

char *_strcat(char *dest, char *src)
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
