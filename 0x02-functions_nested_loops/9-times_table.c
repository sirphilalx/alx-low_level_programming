#include "main.h"
/**
 *
 */

void times_table(void)
{
	int num;
	int operand;

	for (num = 0; num <= 10; num++)
	{
		for (operand = 0; operand <= 10; operand++)
		{
			int result = operand * 9;
			_putchar(result);
		}
		_putchar('\n');
	}
}
