#include "main.h"
/**
 * _strlen - The function tthat gets called
 * @s: the string that gets passed to the function
 * Return: 0 always
 */

int _strlen(char *s)
{
	int result = 0;

	for (; *s != '\0'; s++)
	{
		result++;
	}
	return (result);
}
