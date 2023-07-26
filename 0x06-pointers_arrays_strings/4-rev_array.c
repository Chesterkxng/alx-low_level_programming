#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * reverse_array - Entry point.
 * Description: a function that reverse an array
 * @a : array
 * @n : length of the array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j, c;

	i = 0;

	j = n - 1;

	while (i < j)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		i++;
		j--;
	}
}
