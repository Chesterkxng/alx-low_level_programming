#include "main.h"

/**
 * print_times_table - Write a function that prints times table from 0 to 15.
 * @n: times table integer limit
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int res;
				
				res = i * j;

				if (j != n)
				{
					printf("%d, ", res);
				}
				else
				{
					printf("%d\n", res);
				}
			}
		}
		printf("\n");
	}
	else
	{
		printf("\n");
	}
}
