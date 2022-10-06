#include "main.h"
#include <stdlib.h>
/**
*_calloc - function that allocates memory for an array, using malloc
*@nmemb: element number of array
*@size: size of an array
*Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int mmry;
	char *mem;

	if (nmemb == 0 || size == 0)
	return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	for (mmry = 0; mmry < (nmemb * size); mmry++)
	{
		mem[mmry] = 0;
	}
	return (mem);
}
