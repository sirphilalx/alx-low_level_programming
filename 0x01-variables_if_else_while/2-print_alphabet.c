#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: always 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
