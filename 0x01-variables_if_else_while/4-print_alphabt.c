#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all letters apart from q and e
 *
 * Return: always 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
