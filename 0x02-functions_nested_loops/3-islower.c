#include "main.h"

/**
 *_isLower(int c) - prints lowercase
 *Description: Write a function that checks for lowercase character.
 *Return 1 if the char is lowercase otherwise returns 1
 */

int _islower(int c)
{
	if (int c > 96 && int c <122)
	{
		_putchar("is lowercase");
		return(1);
	}
	else
	{
		return (0);
	}
