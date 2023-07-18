#include "main.h"

/**
 * print_alphabet - Entry point
 * Description:  a program that print
 * the alphabet in lowercase followed by a new line
 *
 * Return: void (Success)
 */

void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
