#include "main.h"
/**
 * _strchr - the function the searches for a character
 * @s: the string that is being searched upon
 * @c: the character that is being searched for
 * Return: returns the ptr to the character if found
 * returns the ptr to the null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
