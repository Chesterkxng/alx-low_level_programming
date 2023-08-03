#include "main.h"

int guesser(int guess, int n);
/**
 * _sqrt_recursion - return the root square
 * @n: a input (integer)
 * Return: the root square of n
 */

int _sqrt_recursion(int n)
{
	int guess;

	guess = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (guesser(guess, n));
	}

}
/**
 * guesser - guesser of square root
 * @guess: a input (integer)
 * @n: a input (integer)
 * Return: the guess
 */

int guesser(int guess, int n)
{
	if (guess * guess - n == 0)
	{
		return (guess);
	}
	else if (guess == n/2)
	{
		return (-1);
	}
	return (guesser(++guess, n));
}
