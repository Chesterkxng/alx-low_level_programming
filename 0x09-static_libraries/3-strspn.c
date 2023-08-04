#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * _strspn - Entry point
 * Description: function copies n bytes from memory area
 * src to memory area dest
 * @s: a pointer to a string
 * @accept: acceptation char
 *
 * Return: a pointer to a string.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i, j, k;

	count =  0;
	i = 0;
	j = 0;
	k = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		k = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				k = 1;
				count++;
			}
			j++;
		}
		if (k == 0)
		{
			break;
		}
		i++;
	}
	return (count);
}
