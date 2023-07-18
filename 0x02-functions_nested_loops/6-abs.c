#include "main.h"
/**
 * _abs - Entry point
 * Description:  return the absolute value of a given int 
 *
 * @c: character(int) to be checked
 *
 * Return: 0 (is lowercase)
 *         1 (otherwise)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}

}
