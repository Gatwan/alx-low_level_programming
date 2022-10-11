#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*new_dog - function that creates a new dog
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*Return: struct dog else NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pet;
	int a, b, c;

	pet = malloc(sizeof(dog_t));

	if (pet == NULL)
	{
		free(pet);
		return (NULL);
	}
	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;
	pet->name = malloc(a + 1);
	pet->owner = malloc(b + 1);

	if (pet->name == NULL || pet->owner == NULL)
	{
		free(pet->name), free(pet->owner), free(pet);
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		pet->name[c] = name[c];
	}
	pet->name[c] = '\0';
	for (c = 0; c < o; c++)
	{
		pet->owner[c] = owner[c];
	}
	pet->owner[c] = '\0';
	pet->age = age;
	return (pet);
}
