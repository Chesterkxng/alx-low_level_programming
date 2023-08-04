#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Entry point
 * Description:  a program that statuate if the character is digit
 * @c : input character
 * Return: 1 (if digit)
 *         0 (if not)
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
