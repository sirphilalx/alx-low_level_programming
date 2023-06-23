#include "function_pointers.h"
/**
 * print_name - the function name of the function
 * @name: the character array
 * @f: the function pointer that returns the address of a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
