#include "search_algos.h"
#include <math.h>
/**
 * interpolation_search - interpolation search method
 * @array: given array
 * @size: array's size
 * @value: searched value
 * Return: the index of the first occurence
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t low, high;

	low = 0;
	high = size - 1;

	if (!array || size == 0)
		return (-1);
	do {
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		if (pos <= size)
			printf("Value checked array[%ld] = [%d]\n",
			       pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos;
		else
			low = pos;
	} while (value >= array[low] && value <= array[high] && low <= high);

	return (-1);

}
