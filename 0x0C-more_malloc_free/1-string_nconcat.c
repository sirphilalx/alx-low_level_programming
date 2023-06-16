#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - the program name
 * @s1: the first argument
 * @s2: the second argument
 * @n: the number of char to be copied from s2
 *
 * Return: return NULL if failed else, return the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrChar;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ptrChar = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptrChar = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptrChar == NULL)
		return (NULL);

	while (i < len1)
	{
		ptrChar[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		ptrChar[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		ptrChar[i++] = s2[j++];

	ptrChar[i] = '\0';

	return (ptrChar);
}
