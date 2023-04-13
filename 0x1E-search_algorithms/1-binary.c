#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t half, i;
	int index;

	if (array == NULL || size < 1)
		return (-1);
	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf("%d\n", array[i]);
		else
			printf("%d ", array[i]);
	}
	if (size % 2 == 0)
	{
		half = (size / 2) - 1;
		size = size / 2;
		if (value < array[half])
			size -= 1;
	}
	else
	{
		half = (size - 1) / 2;
		size = half;
	}

	if (value == array[half])
		return (half);
	else if (array[half] < value)
	{
		index = binary_search((array + (half + 1)), size, value);
		if (index != -1)
			index += half + 1;

		return (index);
	}
	else if (array[half] > value)
		return (binary_search(array, size, value));
	return (-1);
}
