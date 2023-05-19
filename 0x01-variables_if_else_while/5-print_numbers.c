#include <stdio.h>

/**
 * main - entry point
 *
 * Description: all single digits
 *
 * Return: always 0 on success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
