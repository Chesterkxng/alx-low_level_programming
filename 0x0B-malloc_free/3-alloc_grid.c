#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - Entry point
 * Description: Write a function display a grid.
 * @width: input
 * @height: input
 * Return: null or pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height, i++)
	{
		for (j = 0, i < width, j++)
			grid[i][j] = 0;
	}
	return (grid);
}
