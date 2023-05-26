#include "main.h"

void more_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int j = '0';

		while (j <= '14')
		{
			_putchar(j);
			j++;
		_putchar('\n');
		}
	}
}
