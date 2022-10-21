#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: the variable
 * Return: returns 1 if uppercase otherwise return 0
 */

int _isupper(int c)
{
	if (int c >= 'A' && int c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
