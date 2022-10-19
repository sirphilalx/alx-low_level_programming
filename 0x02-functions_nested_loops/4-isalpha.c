#include "main.h"

/**
 * _isalpha - checks for alphabet letters.
 * @c: the char to be checked
 * Return: returns 1 if variable is a letter, otherwise, returns 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
