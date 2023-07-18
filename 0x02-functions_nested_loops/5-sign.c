#include "main.h"

/**
 * print_sign - Entry point
 * Description: a program that prints the sign
 * of a number
 *
 * @n: character(int) to be checked
 *
 * Return: 0 (if is zero)
 *         1 (if is greater than zero)
 *        -1 (if is less than zero)
 */

int print_sign(int n)
{
	if ((int)n > 0)
	{
		return (1);
	}
	else if (int(n) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}

}
