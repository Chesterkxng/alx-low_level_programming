#include "main.h"
#include <stdio.h>

/**
 * *_strstr - Entry point
 * Description: function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @haystack: a pointer to a string
 * @needle: acceptation char
 *
 * Return: a pointer to a string.
 */

char *_strstr(char *haystack, char *needle)
{
	char *sub1, *sub2;

	while (*haystack != '\0')
	{
		sub1 = haystack;
		sub2 = needle;

		while (*sub2 != '\0' && *haystack == *sub2)
		{
			haystack++;
			sub2++;
		}
		if (*sub2 == '\0')
		{
			return (sub1);
		}
		haystack++;
	}
	return (NULL);
}
