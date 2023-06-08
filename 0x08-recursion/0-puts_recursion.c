#include "main.h"
/**
 * _puts_recursion - the function that prints strings
 * @s: the string that gets printed
 * Return: return 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
	}
	s++;
	_puts_recursion(s);
}
