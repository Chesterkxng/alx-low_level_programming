#include "main.h"
#include <stdlib.h>
int *_memset(int *s, int min, int max);
/**
 * *array_range - Entry point
 * Description: a function allocates memory and arrange
 * it from min to max.
 * @min: int
 * @max: int
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	_memset(p, min, max);
	return (p);
}
/**
 * *_memset - Entry point
 * Description: function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 * @s : a point to a string
 * @min: integer
 * @max: integer
 *
 * Return: a pointer to a int.
 */

int *_memset(int *s, int min, int max)
{
	int i;

	for (i = 0; min <= max; i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}
