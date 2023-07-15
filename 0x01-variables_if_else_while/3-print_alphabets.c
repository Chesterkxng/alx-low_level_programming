#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabets in Lowercase and Uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, C;
c = 'a';
C = 'A';
for (; c <= 'z', c++)
{
putchar(c);
}
for (; C <= 'Z'; C++)
{
putchar(C);
}
putchar('\n');
return (0);
}
