#include <stdlib.h>
#include "main.h"
/**
 * create_array - the function itselt
 * @size: the size of the array
 * @c: the certain character that fills the memory
 * Return: NULL if size is 0 or a pointer to an array
 * if NULL fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
