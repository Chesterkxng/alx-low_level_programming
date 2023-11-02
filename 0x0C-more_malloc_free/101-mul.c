#include "main.h"
/**
 * _isnumber - check is an input is a number or not
 *
 * @c: string to check
 *
 * Return: 1 if `c` is a number, 0 otherwise
 *
 */
int _isnumber(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		if (c[i] < 48 || c[i] > 57)
			return (0);
	return (1);
}
/**
 * _atoi - Write a function that convert a string to an integer.
 * @s : pointer to a char
 * Return: integer.
 */

long int _atoi(char *s)
{
	long int i, k, num, j;

	i = 0;
	k = 0;
	num = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-' && j == 0)
		{
			k++;
		}
		if (*(s + i) >= 48 &&  *(s + i) <= 57)
		{
			if (k % 2 == 0)
			{
				num = num * 10 + (*(s + i) - 48);
			}
			else
			{
				num = num * 10 - (*(s + i) - 48);
			}
			j = i;
		}
		if (j != 0 && j != i)
		{
			break;
		}
		i++;
	}
	return (num);
}
/**
 * itoa - converts an integer to a string
 *
 * @n: number to convert
 *
 * @buffer: buffer to store the converted number
 *
 * Return: the converted number is string
 */
char *itoa(long int n, char *buffer)
{
	if (n / 10 != 0)
		buffer = itoa(n / 10, buffer);

	*buffer = n % 10 + '0';
	buffer++;

	return (buffer);
}
/**
 * _strlen - Entry point
 * Description:  a program that return the length of a given
 * char
 * @s: given char
 * Return: the number of characters
 */
int _strlen(char *s)
{
	int count = 0;

	while (s && s[count] != '\0')
		count++;
	return (count);
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: list of args
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	int is_num1, is_num2;
	char *error = "Error\n";
	char buffer[1024] = {0};

	if (argc != 3)
	{
		write(1, error, _strlen(error));
		exit(98);
	}
	is_num1 = _isnumber(argv[1]);
	is_num2 = _isnumber(argv[2]);
	if (is_num1 == 0 || is_num2 == 0)
	{
		write(1, error, _strlen(error));
		exit(98);
	}
	itoa(_atoi(argv[1]) * _atoi(argv[2]), buffer);
	write(1, buffer, _strlen(buffer));
	_putchar('\n');
	return (0);
}
