#include "main.h"

/**
 * _islower - check if alpahbet is lower
 * @c: An input character
 * Return: return 1 if c is lower and 0 otherwise
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
return (lower);
}
