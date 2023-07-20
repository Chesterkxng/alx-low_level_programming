#include "main.h"

/**
 * _isupper - Entry point
 * Description:  a program that statuate if the character is uppercase or no
 * @c : input character
 * Return: 1 (if uppercase)
 *         0 (if not)
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (i == c)
		{
			return (1);
			break;
		}
	}
	return (0);
}
