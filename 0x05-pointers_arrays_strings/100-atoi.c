#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer.
 * followed by a new line.
 * @s : pointer to a char
 * Return: integer.
 */

int _atoi(char *s)
{
	int i, k, num, j;

	i = 0;
	k = 0;
	num = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-' && j == 0)
		{
			k++;
		}
		if (*(s + i) >= 48 &&  *(s + i) <= 57)
		{
			if (k % 2 == 0)
			{
				num = num * 10 + (*(s + i) - 48);
			}
			else
			{
				num = num * 10 - (*(s + i) - 48);
			}
			j = i;
		}
		if (j != 0 && j != i)
		{
			break;
		}
		i++;
	}


	return (num);
}
