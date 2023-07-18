#include <main.h>

/**
 * print_alphabet - Entry point
 * Description:  a program that print
 * the alphabet in lowercase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a;

	a = 'a';


	for (a; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_puctchar('\n');
	return (0);

}
