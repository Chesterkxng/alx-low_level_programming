#include "main.h"
/**
 * get_bit - get the bit at the given index
 * @n: given number
 * @index: wanted index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
