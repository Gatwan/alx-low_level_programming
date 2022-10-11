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
	dog_t *nina;
	int namelen, ownerlen, a;

	if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

	nina = malloc(sizeof(dog_t));
	if (nina == NULL)
	{
		free(nina);
		return (NULL);
	}
	for (namelen = 0; name[namelen] != '\0'; namelen++)

	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)

	nina->name = malloc(sizeof(char) * (namelen + 1));
	if (nina->name == NULL)
	{
		free(nina->name);
		free(nina);
		return (NULL);
	}
	for (a = 0; a < namelen; a++)
	nina->name[a] = name[a];
	nina->name[a] = '\0';
	nina->age = age;
	nina->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (nina->owner == NULL)
	{
		free(nina->owner);
		free(nina->name);
		free(nina);
		return (NULL);
	}
	for (a = 0; a < ownerlen; ownerlen++)
	nina->owner[a] = owner[a];

	nina->owner[a] = '\0';
	return (nina);
}
