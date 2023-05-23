#include "main.h"
/**
 * _isalpha - checks if the argument passed to it is a letter
 * @c: the argument passed to it
 * Return: 1 if its a letter otherwise, returns 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
