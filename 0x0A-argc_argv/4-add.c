#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main entry point
 * @argc: the counter
 * @argv: the vector
 * Return: returns 0 always
 */

int main(int argc, char *argv[])
{
	int result, num, i, j, k;


	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d", sum);
	return (0);
}
