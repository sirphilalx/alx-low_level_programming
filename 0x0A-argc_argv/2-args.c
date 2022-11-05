#include <stdio.h>
#include "main.h"

/**
 * main - entry point of the program
 * @argc: the argument counter
 * @argv: the argument mentioner
 * Return: returns always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
