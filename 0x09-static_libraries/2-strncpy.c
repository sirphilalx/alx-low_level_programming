#include "main.h"

/**
* _strncpy - the function that copies
* @dest: the destination of the copied item
* @src: the source of the copied item
* @n: the number of times the copies will be made
* Return: returns the destination
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_src;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

		if (i > len_src)
			dest[i] = '\0';
	}

	return (dest);
}
