#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: prints _putchar with a newline
 *
 * Return: always 0 on success
 */

int main(void)
{
	int i;
	char a[8] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(a[i]);
	_putchar('\n');
	return (0);
}
