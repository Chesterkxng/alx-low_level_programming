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
/**
 * _strlen - Entry point
 * Description:  a program that return the length of a given
 * char
 * @s: given char
 * Return: the number of characters
 */
unsigned int _strlen(const char *s)
{
	unsigned int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * power - a program that return a number powered by another
 * @n : number to power
 * @expo: the power
 * Return: unsigned int
 */
unsigned int power(unsigned int n, unsigned int expo)
{
	unsigned int i, power = 1;

	for (i = 0; i < expo; i++)
		power *= n;
	return (power);
}
