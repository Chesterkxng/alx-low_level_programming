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
	int sum, i, j;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
