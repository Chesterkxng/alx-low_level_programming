#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digits numbers
 *	0 to 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
a = 0;
for (; a < 10; a++)
{
printf("%d", a);
}
putchar('\n');
return (0);
}
