#include "search_algos.h"
/**
 * linear_search - linear search method
 * @array: given array
 * @size: array's size
 * @value: searched value
 * Return: the index of the first occurence
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return ((int)idx);
	}
	return (-1);
}
