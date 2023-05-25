#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints all possible different combinations of three digits.
 *
 * Return: always 0 on success
 */

int main(void)
{

	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
