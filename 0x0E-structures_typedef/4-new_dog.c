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
	char *newname = name, *newowner = owner;
	dog_t nina, *new;

	if (name == NULL || owner == NULL || age < 0)
	return (NULL);

	nina.name = newname;
	nina.age = age;
	nina.owner = newowner;

	new = &nina;
	if (new == NULL)
	return (NULL);

	return (new);
}
