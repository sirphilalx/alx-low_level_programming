#include "main.h"

/**
 * _islower - the function name
 * @c: the letter c typecasted to an int
 * Return: 0 if the letter is lowercase otherwise returns 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
