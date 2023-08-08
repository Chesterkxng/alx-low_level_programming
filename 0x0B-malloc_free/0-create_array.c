#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *create_array - Entry point
 * Description: Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: character
 * Return: null if size = 0 or failure
 * pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *p_2_c;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p_2_c = (char *)malloc(sizeof(*p_2_c) * size);

	if (p_2_c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p_2_c + i) = c;
	}
	return (p_2_c);
}
