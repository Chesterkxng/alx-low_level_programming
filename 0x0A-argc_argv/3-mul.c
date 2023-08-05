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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
