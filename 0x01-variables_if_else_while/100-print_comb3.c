#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: unique combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
i = 0;
for (; i < 10; i++)
{
j = i + 1;
for (; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
