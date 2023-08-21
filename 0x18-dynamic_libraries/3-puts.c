#include "main.h"
/**
 * _puts - the function name that gets called
 * @str: the string that gets printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
