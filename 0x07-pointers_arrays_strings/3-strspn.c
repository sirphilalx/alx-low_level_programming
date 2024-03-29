#include "main.h"
/**
 * _strspn - the function that checks the span
 * @s: the string
 * @accept: the second string
 * Returns: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0') 
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
