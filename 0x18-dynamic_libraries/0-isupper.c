#include "main.h"

/**
 * _isupper - function name
 * @c: the parametre
 * Return: 1 if uppercase, otherwise returns 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
