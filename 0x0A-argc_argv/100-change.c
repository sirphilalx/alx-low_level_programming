#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main entry point
 * @argc: counter
 * @argv: vector
 * Return: return 0 or else 1
 */
int main(int argc, char *argv[])
{
	int num, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 1)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("%s\n", '0');
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
