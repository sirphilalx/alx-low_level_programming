#include <unistd.h>

/**
 * _putchar - the function prints to the console
 * @c: the character that it prints
 * Return: returns 1 on success otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
