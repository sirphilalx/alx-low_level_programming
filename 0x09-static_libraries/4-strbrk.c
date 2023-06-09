#include "main.h"
/**
 * _strpbrk - the function that gets called
 * @s: the word that is being searched upon
 * @accept: the string that is being searched
 * Return: returns a pointer to the byte in s that matches accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
