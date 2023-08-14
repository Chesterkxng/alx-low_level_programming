#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print the dog info
 * @d: dog struct
 * Return: void
 */
void print_dog (struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)");
		if (d->age)
			printf("Age: %f\n", (*d).age);
		else
			printf("Age: (nil)");
		if (d->owner)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)");
	}
}