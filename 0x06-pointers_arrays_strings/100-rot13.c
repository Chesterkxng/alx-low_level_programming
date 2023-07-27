#include "main.h"
#include <stdio.h>

/**
 * *rot13 - Entry point.
 * Description: a function encode a strinf
 * @s: string
 *
 *
 * Return: the desired output.
 */
char *rot13(char *s)
{
	int i, j;

	char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
			 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
			 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	char rot13[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		      'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		      'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		      'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E',
		      'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	i = 0;

	j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 52)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
