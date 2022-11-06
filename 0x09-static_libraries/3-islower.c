#include "main.h"

/**
 *_islower - prints lowercase.
 *@c: this is the char to be checked.
 *Return: 1 if the char is lowercase otherwise returns 1.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
