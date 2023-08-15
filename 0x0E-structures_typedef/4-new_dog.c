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
 * *new_dog - Function that point to a new dog
 * @name : name
 * @age: age
 * @owner: owner
 * Return: a pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *namecpy, *ownercpy;
	dog_t *new_dog;
	int i, j;

	namecpy = malloc(sizeof(char) * (_strlen(name) + 1));
	ownercpy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (namecpy == NULL || owner == NULL)
		return (NULL);
	for (i = 0; i < _strlen(name); i++)
		namecpy[i] = name[i];
	namecpy[i] = '\0';
	for (j = 0; j < _strlen(owner); j++)
		ownercpy[j] = owner[j];
	ownercpy[j] = '\0';
		new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
