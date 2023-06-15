#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: the first argument
 * @argv: the second argument
 * Return: returns 0 on success otherwise returns 1
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;
	int j;
	int m;
	int num;

	for (i = 1; i < argc; i++)
	{
		for (m = 0; argv[i][m] != '\0'; m++)
		{
			if (argv[i][m] > '9' || argv[i][m] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (j = 1; j < argc; j++)
	{
		num = atoi(argv[j]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
