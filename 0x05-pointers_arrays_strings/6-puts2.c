#include "main.h"

/**
 * puts2 - the function that prints every other character
 * @str: the string
 * Return: always returns 0
 */

void puts2(char *str)

{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
