#include "main.h"
#include <stdlib.h>
/**
*_realloc - function that reallocates a memory block
*@ptr: pointer to the memory
*@old_size: size of the allocated space
*@new_size: size of the new memory block
*Return: pointer to new memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int mem;
	void *pointer;
	char *num1 = ptr, *num2;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		pointer = malloc(new_size);

		if (pointer == NULL)
			return (NULL);
		return (pointer);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer = malloc(sizeof(*num1) * new_size);

	if (pointer == NULL)
	{
		free(ptr);
		return (NULL);
	}
	num2 = pointer;

	for (mem = 0; mem < new_size && mem < old_size; mem++)
	{
		num2[mem] = num1[mem];
	}
	free(ptr);
	return (pointer);
}
