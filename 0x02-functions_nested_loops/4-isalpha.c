#include "main.h"
/**
 * _isalpha - Entry point
 * Description:  a program that tests if a character
 * is alpha num or not
 *
 * @c: character(int) to be checked
 *
 * Return: 0 (is alphanum)
 *         1 (otherwise)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
