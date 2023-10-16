#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Entry point
 * Description: function copies n bytes from memory area
 * src to memory area dest
 * @s: a pointer to a string
 * @c: searched char
 *
 * Return: a pointer to a string.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
