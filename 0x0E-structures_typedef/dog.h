#ifndef DOG_H
#define DOG_H
/**
*dog_t - typedef for struct dog
*/
typedef struct dog dog_t;
/**
*struct dog - stores a dog information
*@name: dog's name
*@age: dog's age
*@owner: dog's owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
