#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Entry point
 * Description:	 a program that return the length of a given
 * char
 * @s: given char
 * Return: the number of characters
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
/**
 * *_strcpy - Entry point
 * followed by a new line.
 * @dest : destination
 * @src : source
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);

		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
/**
 * *new_dog - Function that point to a new dog
 * @name : name
 * @age: age
 * @owner: owner
 * Return: a pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = (char *)malloc(sizeof(char) * (_strlen(name) + 1));
	if (!(*new_dog).name)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->owner = (char *)malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!(*new_dog).owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
