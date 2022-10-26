#include <unistd>

/**
 * _putchar - writes char
 * @c: char
 * Return: on success returns 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
