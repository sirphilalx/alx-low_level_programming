#include "main.h"

/**
 * *_strstr -  the functions
 * @haystack: the pool
 * @needle: what we are looking for
 * Return: returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (hasytack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
