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
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
