#include "main.h"

/**
 * _isdigit - the name of the function
 * @c: the parametre to be checked
 * Return: returns 1 if c is a digit or else returns 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
