#include "main.h"
/**
 * print_alphabet - Entry point
 * Description:  a program that print 10 times
 * the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

	int i;

	i = 0;

	while (i < 10)
	{
		char a;

		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
