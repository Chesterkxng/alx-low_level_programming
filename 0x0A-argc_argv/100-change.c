#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: a function that print the name of
 * of the progran even after renaming
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 succes 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, cents, coins;
	int dividers[5] = {25, 10, 5, 2, 1};

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += cents / dividers[i];
		cents %= dividers[i];
	}
	printf("%d\n", coins);
	return (0);
}
