#include "main.h"

/**
 * _isdigit - checks if number is a digit
 * @c: the variable to be checked
 * Return: on success retuns 1, otherwise returns 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
