#include <main.h>

/**
 * print_alphabet - Entry point
 * Description:  a program that print 10 times
 * the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a;

	a = 'a';

	int i;

	i = 0;

	for (i; i < 10; i++)
	{
		for (a; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	return (0);

}
