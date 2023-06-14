#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - the function that creates a grid
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: returns a 2 dimensional array of integars
 */
int **alloc_grid(int width, int height)
{
	int **ptrGrid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptrGrid = malloc(sizeof(int *) * height);

	if (ptrGrid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptrGrid[i] = malloc(sizeof(int) * width);

		if (ptrGrid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptrGrid[i]);
			free(ptrGrid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptrGrid[i][j] = 0;
	}

	return (ptrGrid);
}
