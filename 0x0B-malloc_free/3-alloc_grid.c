#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * **alloc_grid - Entry point
 * Description: Write a function that return a pointer to
 * the copy of the given char.
 * @width: input
 * @height: input
 * Return: null or pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);

	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	i = 0;

	while (i < height)
	{
		j = 0;

		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
