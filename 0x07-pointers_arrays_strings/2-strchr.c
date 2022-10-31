#include "main.h"

/**
 * _strchr - locates a character string
 * @s: the string to be searched
 * @c: the character to be searched
 * Return: if c is found - a pointer to the first occurence, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
