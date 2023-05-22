#include <stdio.h>
/**
 * main - Etry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: always 0 on success
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
