#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * get_op_func - get the right function depending
 * on a given char
 * @s: pointer to char (sign)
 * Return: a pointer to the right function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
