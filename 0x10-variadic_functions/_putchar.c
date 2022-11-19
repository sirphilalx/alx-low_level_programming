#include "variadic_functions.h"
#include <unistd.h>

/**
* _putchar - the function that prints to the screen
* @c: the argument to be printed to the screen
* Return: returns 0 if successful and 1 if not
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
