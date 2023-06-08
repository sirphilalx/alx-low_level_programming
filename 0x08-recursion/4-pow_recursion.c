#include "main.h"
/**
 * _pow_recursion - the function that gets called
 * @x: the operant
 * @y: the operand
 * Return: returns -1 if y is lower than 0 otherwise returns x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
	return (x);
}
