#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints the alphabet
 *	in lowercase exept e and q followed by
 *	a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'a';
for (; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
