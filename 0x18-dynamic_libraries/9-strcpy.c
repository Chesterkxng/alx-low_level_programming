#include "main.h"

/**
 * *_strcpy - Entry point
 * followed by a new line.
 * @dest : destination
 * @src : source
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);

		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
