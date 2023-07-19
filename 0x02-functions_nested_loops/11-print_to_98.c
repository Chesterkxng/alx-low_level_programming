#include "main.h"
#include <stdio.h>

/**
 * print_to_98- Write a function print all the number from the given
 * number to 98.
 *
 * @n : integer
 *
 * Return: int
 */

void print_to_98(int n)
{
	int i;
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{

			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
