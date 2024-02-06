#include "search_algos.h"
#include <math.h>
/**
 * binary_search - binary search method
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
/**
 * exponential_search - exponential search method
 * @array: given array
 * @size: array's size
 * @value: searched value
 * Return: the index of the first occurence
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t temp_idx, idx = 1;
	int r_val, bs_idx;

	if (!array || size == 0)
		return (-1);
	do {
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		temp_idx = idx;
		idx *= 2;

	} while (idx < size && array[idx] < value);

	printf("Value found between indexes [%ld] and ", temp_idx);
	if (idx >= size)
		printf("[%ld]\n", size - 1);
	else
		printf("[%ld]\n", idx);

	bs_idx = binary_search((array + temp_idx), idx - temp_idx, value);
	r_val = bs_idx == -1 ? -1 :  bs_idx +  (int)temp_idx;

	return (r_val);
}
