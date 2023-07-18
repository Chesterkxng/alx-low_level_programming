#include "main.h"
/**
 * print_last_digit - Entry point
 * Description:  return the last digit of a given int
 *
 * @n: character(int) to be checked
 *
 * Return: the value of the last digit
 */

void jack_bauer(void)
{
	int i, j;

	i, j = 0;

	for (i; i <= 23; i++)
	{
		for (j; j <=59; j++)
		{
			_putchar(j % 10 + '0');
			_putchar(j / 10 + '0');
			_putchar(':');
			_putchar(i % 10 + '0');
			_putchar(i / 10 + '0');
			_putchar('\n');
		}
	}

}
