#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci();
	return (0);
}
/**
 * fibonacci Entry point.
 * Description: a function that prints the fibonnaci
 * Numbers n=50
 *
 * Return: the desired dest.
 */

void fibonacci(void)
{
	long int fib1, fib2, sum;

	int i;

	fib1 = 0;

	fib2 = 1;

	printf("%d, ", fib1);
	printf("%d, ", fib2);
	i = 2;

	while (i < 50)
	{
		sum =  fib1 + fib2;

		printf("%d, ", sum);
		fib2 = sum;
		fib1 = fib2;
		i++;
	}
	printf("\n");
}
