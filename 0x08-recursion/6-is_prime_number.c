#include "main.h"

int prime_searcher(int divider, int n);
/**
 * is_prime_number - return 1 if prime 0 otherwise
 * @n: a input (integer)
 * Return: boolean
 */
int is_prime_number(int n)
{
	int divider;

	divider = 2;

	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (prime_searcher(divider, n));
}

/**
 * prime_searcher - divider searcher
 * @divider: divider.
 * @n: int
 * Return: int
 */

int prime_searcher(int divider, int n)
{
	if (n % divider == 0)
	{
		return (0);
	}
	else if (divider == n - 1)
	{
		return (1);
	}
	return (prime_searcher(divider + 1, n));
}
