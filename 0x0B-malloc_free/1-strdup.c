#include <stdlib.h>
#include "main.h"
/**
 * _strdup - the function that duplicates a string
 * @str: the string that gets duplicated
 * Return: NULL if string is NULL. On success, returns a
 * a pointer to the duplicate string. Returns NULL if 
 * insufficient memory was available
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *ptr;

	if (str == NULL)
		return NULL;
	i = 0;
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return NULL;
	for (j = 0; str[j]; j++)
		ptr[j] = str[j];
	return (ptr); 
}
