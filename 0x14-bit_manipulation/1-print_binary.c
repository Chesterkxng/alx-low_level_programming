#include "main.h"
/**
 * print_binary - a function that convert long int and print
 * it in binary format
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (temp = n >> 1; temp > 0; count++)
		temp = temp >> 1;
	for (; count >= 0; count--)
	{
		if ((n >> count) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
