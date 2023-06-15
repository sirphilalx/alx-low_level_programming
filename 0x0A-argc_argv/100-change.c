#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: first argument
 * @argv: second argument
 * Return: returns 0 on success or 1
 */
int main(int argc, char *argv[])
{
	int num;
	int j;
	int result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
