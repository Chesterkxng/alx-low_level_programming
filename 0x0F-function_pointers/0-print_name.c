#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a pointer to function that print
 * name
 * @name: name to print
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
