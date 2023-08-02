#include "main.h"

/**
 * _pow_recursion - return x powered by y
 * @x: a input (integer)
 * @y: a input (power)
 * Return: x powered by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
