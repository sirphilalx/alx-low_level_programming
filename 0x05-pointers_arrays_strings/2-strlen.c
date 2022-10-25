#include "main.h"

/**
 * _strlen - the function name
 * @s: the variable
 * Return: always returns 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
