#include "main.h"
/**
 * set_bit - set a bit
 * @n: pointer to int
 * @index: where to set the bit
 * Return: 1 on success -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	int bit = get_bit(*n, index);

	if (bit == 0)
	{
		mask = 1 << index;
		*n = *n | mask;
		return (1);
	}
	return (-1);
}
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
