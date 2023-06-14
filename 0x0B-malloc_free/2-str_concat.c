#include <stdlib.h>
#include "main.h"
/**
 * str_concat - the function that concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the newly allocated space in memory
 * which contains the contents of S1 followed by the contents
 * of s2. Returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrStr;
	int i;
	int j;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	ptrStr = malloc(sizeof(char) * (i + j + 1));

	if (ptrStr == NULL)
		return (NULL);

	for (j = 0; s1[j] != '\0'; j++)
		ptrStr[j] = s1[j];
	for (i = 0; s2[i] != '\0'; i++)
	{
		ptrStr[j] = s2[i];
		j++;
	}

	return (ptrStr);
}
