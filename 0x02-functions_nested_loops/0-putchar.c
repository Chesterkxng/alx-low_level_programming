#include <main.h>

/**
 * main - Entry point
 * Description:  a program that print
 * the word _putchar followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chaine[8] = "_putchar";

	int i;

	i = 0;


	while (chaine[i] != '\0')
	{
		_putchar(chaine[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
