#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @n: the pointer
 * Return: char
 */
char *string_toupper(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		n++;
		}
	}
	return (n)
}
