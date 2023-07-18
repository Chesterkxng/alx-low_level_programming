#include "main.h"
/**
 * print_last_digit - Entry point
 * Description:  return the last digit of a given int
 *
 * @n: character(int) to be checked
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
	else
	{
		return ((-1 * n) % 10);
	}

}
