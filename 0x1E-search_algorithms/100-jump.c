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
	size_t step, idx = 0;
	int status = 1;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	while (status == 1)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (value <= array[idx + step] || idx + step >= size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       idx, idx + step);
			for (; idx < idx + step; idx++)
			{
				printf("Value checked array[%ld] = [%d]\n", idx,
				       array[idx]);
				if (value == array[idx])
					return ((int)idx);
				if (idx == size - 1)
					return (-1);
			}
		}
		idx += step;
	}
	return (-1);
}
