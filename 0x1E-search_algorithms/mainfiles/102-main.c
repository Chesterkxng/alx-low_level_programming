#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 9, interpolation_search(array, size, 9));
	printf("Found %d at index: %d\n\n", 0, interpolation_search(array, size, 0));
	printf("Found %d at index: %d\n", 10, interpolation_search(array, size, 10));
	return (EXIT_SUCCESS);
}
