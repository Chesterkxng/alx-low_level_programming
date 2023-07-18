#include "main.h"
/**
 *times_table - Entry point
 * Description:  a program that prints the 9 times table
 *
 *
 *
 * Return: void
 */
void times_table(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		int j;

		j = 0;

		while (j <= 9)
		{
			_putchar(i * j + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
	     		j++;
		}
		_putchar('\n');
		i++;
	}
}
