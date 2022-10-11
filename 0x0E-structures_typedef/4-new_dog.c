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

	nina = malloc(sizeof(*nina));
	if (nina == NULL || !(name) || !(owner))
	{
		free(nina);
		return (NULL);
	}

	for (namelen = 0; name[namelen]; namelen++)

	for (ownerlen = 0; owner[ownerlen]; ownerlen++)

	nina->name = malloc(namelen + 1);
	nina->owner = malloc(ownerlen + 1);

	if (!(nina->name) || (nina->owner))
	{
		free(nina->name);
		free(nina->owner);
		free(nina);
		return (NULL);
	}

	for (a = 0; a < namelen; a++)
		nina->name[a] = name[a];
	nina->name[a] = '\0';

	nina->age = age;

	for (a = 0; a < ownerlen; a++)
		nina->owner[a] = owner[a];
	nina->owner[a] = '\0';

	return (nina);
}
