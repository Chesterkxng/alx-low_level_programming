#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: unique combination of four digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;
i = 0;
j = 0;
k = 0;
l = 0;
for (; i < 10; i++)
{
k = i;
for (; j < 10; j++)
{
l = j + 1;
for (; k < 10; k++)
{
for (; l < 10; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
