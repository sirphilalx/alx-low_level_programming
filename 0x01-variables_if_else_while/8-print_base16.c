#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: always 0 on success
 */

int main(void)
{
	int i;
	char hex[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
