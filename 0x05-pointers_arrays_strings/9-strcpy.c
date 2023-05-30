#include "main.h"
/**
 * _strcpy - the function name that copies
 * @dest: more like a destination
 * @src: more like a source
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
