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

int _atoi(char *s)
{
	int i, k, num, j;

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
 * print_number - Entry point
 * Description: a program that prints an integer
 * @n : integer
 * Return: void
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar(45);
		if (-n / 10 > 0)
		{
			print_number(-n / 10);
		}
		_putchar(-(n % 10) + 48);
	}
	else
	{
		if (n / 10 > 0)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + 48);
	}
}
/**
 * print_error - just to print error
 * Return: void
 */
void print_error(void)
{
	char *error = "Error\n";

	write(1, error, 6);
}
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: list of args
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	int is_num1, is_num2, a, b;

	if (argc != 3)
	{
		print_error();
		exit(98);
	}
	is_num1 = _isnumber(argv[1]);
	is_num2 = _isnumber(argv[2]);
	if (is_num1 == 0 || is_num2 == 0)
	{
		print_error();
		exit(98);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	print_number(a * b);
	_putchar('\n');
	return (0);
}
