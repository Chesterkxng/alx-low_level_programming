#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a pointer to function that searches for an integer
 * @array: array
 * @size: size
 * @cmp: function to pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i, check;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			check = (*cmp)(array[i]);
			if (check != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
