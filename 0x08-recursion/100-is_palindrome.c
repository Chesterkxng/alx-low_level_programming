#include "main.h"

int eq_checker(char *s, int i, int j);
/**
 * _strlen_recursion - a function that return the length
 * of the string
 * @s: a pointer that point to a char
 * Return: the length of the string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - tells if the string is a palindrome or not
 * @s:  a pointer to a char
 * Return: bolean.
 */
int is_palindrome(char *s)
{
	int i, j;

	i =  0;

	j = _strlen_recursion(s);

	if (j == 0)
	{
		return (1);
	}
	return (eq_checker(s, i, j - 1));
}

/**
 * eq_checker - Check character equality.
 * @s: string
 * @i: int
 * @j: int
 * Return: 0 or 1
 */
int eq_checker(char *s, int i, int j)
{
	if (s[i] != s[j])
	{
		return (0);
	}
	if (i >= j)
	{
		return (1);
	}
	return (eq_checker(s, i + 1, j - 1));
}
