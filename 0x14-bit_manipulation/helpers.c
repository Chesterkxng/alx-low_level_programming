#include "main.h"
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
