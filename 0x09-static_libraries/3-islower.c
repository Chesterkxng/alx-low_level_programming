#include "main.h"
/**
 * _islower - Entry point
 * Description:  a program that print 10 times
 * the alphabet in lowercase followed by a new line
 *
 * @c: character(int) to be checked
 *
 * Return: 0 (is lowercase)
 *         1 (otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
