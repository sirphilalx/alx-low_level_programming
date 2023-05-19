#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'z'; ch++)
	{
		if (ch < 91 && ch > 96)
		{
			putchar(ch);
		}
	}
	return (0);
}
