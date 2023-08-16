#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - a pointer to function that print
 * the elements of an array
 * @array: given array
 * @size: size of array
 * @action: program to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
