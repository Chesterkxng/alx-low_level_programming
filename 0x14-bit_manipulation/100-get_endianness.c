#include "main.h"
/**
 * get_endianness - check
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int var;
	char *c;

	var = 1;
	c = (char *) &var;

	return ((int)*c);
}
