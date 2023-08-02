#include "main.h"

/**
 * factorial - return the factorial of a given int
 * @n: a input (integer)
 * Return: the factorial of the given int
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
