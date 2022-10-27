#include "main.h"

/**
 * _strcmp - the function that compare two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: 0n success 0, else 15 || -15 as the case may be
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
