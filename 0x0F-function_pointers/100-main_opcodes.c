#include <stdlib.h>
#include <stdio.h>
/**
 * main - main entry poing of the program
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	char *operations = (char *) main;
	int i, no_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	no_bytes = atoi(argv[i]);

	if (no_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < no_bytes; i++)
	{
		printf("%02x", operations[i] & 0xFF);
		if (i != no_bytes -1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
