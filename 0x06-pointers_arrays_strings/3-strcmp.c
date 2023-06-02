#include "main.h"
/**
 * _strcmp - the function that gets called
 * @s1: the first string
 * @s2: the second string
 * Return: returns the difference between the ascii values of
 * the two strings if they are not the same or else, returns 0
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
		k++;
	}
	return (0);
}
