#include "main.h"
#include <stdlib.h>
/**
*array_range - function that creates an array of integers
*@min: minimum integer
*@max: maximum integer
*Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *array;
	int pointer, i = 0;

	if (min > max)
	return (NULL);

	pointer = (max - min) + 1;
	array = malloc(sizeof(int) * pointer);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (; min <= max; min++)
	{
		array[i] = min;
		i++;
	}
	return (array);
}
