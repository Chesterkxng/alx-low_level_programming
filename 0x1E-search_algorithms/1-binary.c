#include "search_algos.h"
#include <math.h>
/**
 * binary_search - linear search method
 * @array: given array
 * @size: array's size
 * @value: searched value
 * Return: the index of the first occurence
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t mid;
	size_t left;
	size_t right;

	if (array == NULL || size == 0)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		i = 0;
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
