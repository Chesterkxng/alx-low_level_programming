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
int i;
i = 0;
for (; i <= 9; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}

return (0);
}
