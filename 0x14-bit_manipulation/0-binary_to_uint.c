#include "main.h"

/**
 * binary_to_uint - A function that does what his name said
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int  expo, conv = 0, i;

	if (b == NULL)
		return (0);
	expo = _strlen(b) - 1;
	for (i = 0; i < _strlen(b); i++, expo--)
	{
		if (b[i] == '1')
			conv += power(2, expo);
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	return (conv);
}
