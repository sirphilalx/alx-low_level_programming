#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: first argument
 * @argv: second argument
 * Return: returns 0 if successful or else returns 1
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc <= 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
}
