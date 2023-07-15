#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the numbers of base
 *	16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c;
i = 0;
c = 'a';
for (; i <= 9; i++)
{
putchar(i + '0');
}
for (; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
