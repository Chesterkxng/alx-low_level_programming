#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * print_array - Entry point
 * Description:  a program that reverse print a
 * string
 * @a: given array
 * @n: given int
 * Return: the n value of the array separate by a comma
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	if (n > 0)
	{

		while (i < n)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
			i++;
		}
	}
	else
	{
		printf("\n";
	}
}
