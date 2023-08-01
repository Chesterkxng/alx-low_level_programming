#include "main.h"
#include <stdio.h>


/**
 * set_string - Entry point
 * Description: Write a function that sets the value of a pointer to a char.
 * @s: a pointer that point to a string
 * @to: a pointer to char
 *
 * Return: a pointer to a string.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
