#include "main.h"
/**
 * flip_bits - how many bits to flip to be equal
 * @n: first int
 * @m: second int
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flip = 0;
	int a, b;

	for (i = 0; i < 64; i++)
	{
		a = get_bit(n, i);
		b = get_bit(m, i);
		if (a != b)
			flip++;
	}
	return (flip);
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
