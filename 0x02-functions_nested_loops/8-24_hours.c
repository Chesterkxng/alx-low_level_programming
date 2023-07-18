#include "main.h"
/**
 * jack_bauer - Entry point
 * Description:  jack baueur
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	i, j = 0;

	while (i <= 23)
	{
		while (j <=59)
		{
			_putchar(j % 10 + '0');
			_putchar(j / 10 + '0');
			_putchar(':');
			_putchar(i % 10 + '0');
			_putchar(i / 10 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}

}
