#include "main.h"

/**
 * _putchar - prints to the console
 * @c: the char it prints to the console
 * Return: returns a value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
