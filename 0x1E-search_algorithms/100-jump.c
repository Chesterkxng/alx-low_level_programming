#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search method
 * @array: given array
 * @size: array's size
 * @value: searched value
 * Return: the index of the first occurence
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, temp_idx, idx = 0;


	if (!array || size == 0)
		return (-1);
	step = floor(sqrt(size));
	do {
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
		temp_idx = idx;
		idx += step;

	} while (idx < size && array[idx] < value);
	printf("Value found between indexes [%ld] and [%ld]\n",
	       temp_idx, idx);
	for (; temp_idx <= idx && temp_idx < size; temp_idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", temp_idx,
		       array[temp_idx]);
		if (value == array[temp_idx])
			return ((int)temp_idx);
	}
	return (-1);
}
