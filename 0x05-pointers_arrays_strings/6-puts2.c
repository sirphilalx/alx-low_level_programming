#include "main.h"

/**
 * puts2 - the function that gets called
 * @str: the string that gets passed into the function
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
