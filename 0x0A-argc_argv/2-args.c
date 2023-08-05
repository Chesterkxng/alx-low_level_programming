#include <stdio.h>
/**
 * main - Entry point
 * Description: a function that print the name of
 * of the progran even after renaming
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
