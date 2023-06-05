#include "main.h"
/**
 * _memset - the function that gets called
 * @s: the pointer
 * @b: the constant that fills the memory (value)
 * @n: the number (size)
 * Return: returns the new values
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
