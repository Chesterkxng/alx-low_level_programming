#include "main.h"
#include <stdio.h>

void fizz_buzz(void);
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - Entry point
 * Description: fizz buzz
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
}
