#include <stdio.h>
#include "main.h"
/**
 * main - the entry point of the program
 * @argc: the first argument
 * @argv: the second argument
 * Return: returns 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
