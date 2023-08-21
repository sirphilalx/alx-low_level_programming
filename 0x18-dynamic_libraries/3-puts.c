#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that returns the length of a string.
 * @str: An input character
 * Return: Nothing
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
