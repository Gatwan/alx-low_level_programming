#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: inner array
*@height: outer array
*Return: 2D array
*/
int **alloc_grid(int width, int height)
{
	int mal, array;
	int **pointer;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int *) * height);

	if (point == NULL)
	{
		free(pointer);
		return (NULL);
	}

	for (mal = 0; mal < height; mal++)
	{
		pointer[mal] = malloc(sizeof(int) * width);

		if (pointer[mal] == NULL)
		{
			for (mal--; mal >= 0; mal--)
			{
				free(pointer[mal]);
			}
			free(pointer);
			return (NULL);
		}
	}
	for (mal = 0; mal < height; mal++)
	{
		for (array = 0; array < width; array++)
		{
			pointer[mal][array] = 0;
		}
	}
	return (pointer);
}
