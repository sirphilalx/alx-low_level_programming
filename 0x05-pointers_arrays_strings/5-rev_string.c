#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string itself
 * Return: always returns 0
 */

void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		re = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
