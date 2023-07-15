#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: unique combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
i = 0;
for (; i < 10; i++)
{
j = i + 1;
for (; j < 10; j++)
{
k = j + 1;
for (; k < 10; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
