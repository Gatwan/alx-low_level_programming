#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: fisrt index where value is located else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array [%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array [%d] = [%d]\n", i, array[i]);

	}

	return (-1);
}
