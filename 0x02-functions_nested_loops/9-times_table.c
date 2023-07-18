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
			int time_result;

			time_result = i * j;

			_putchar(time_result / 10 + '0');
			_putchar(time_result % 10 + '0')

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
