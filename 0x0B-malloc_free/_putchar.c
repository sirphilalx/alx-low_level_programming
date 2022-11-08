#include "main.h"
#include <stdlib.h>

/**
* _putchar - the function that prints to the screen
* @c: the variable that gets printed to the screen
* Return: always returns 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
