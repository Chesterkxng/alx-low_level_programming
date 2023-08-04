#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - Entry point
 * Description: function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: a pointer to a string
 * @accept: acceptation char
 *
 * Return: a pointer to a string.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				k = 1;
				break;
			}
			j++;
		}
		if (k == 1)
		{
			break;
		}
		i++;
	}
	if (k == 1)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
