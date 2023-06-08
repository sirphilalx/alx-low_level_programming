#include "main.h"
/**
 * _strlen_recursion - the function name
 * @s: the string that gets played on
 * Return: returns the resulting k
 *//
int _strlen_recursion(char *s)
{
	int k;

	k = 0;
	if (*s)
	{
		k++;
		k += _strlen_recursion(s + 1);
	}
	return (k);
}
