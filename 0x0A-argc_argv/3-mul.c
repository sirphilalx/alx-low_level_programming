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
	int j;
	int result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);
	return (0);
}
