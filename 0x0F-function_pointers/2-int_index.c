#include "function_pointers.h"
/**
*int_index - function that searches for an integer
*@array: array inetger
*@size: number of elements in the array
*@cmp: pointer to function used to compare values
*Return: index of the first element, else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != '\0')
			break;

		else if (cmp(array[a]) == '\0')
			continue;
	}

	if (a == size)
		return (-1);

	return (a);

	}
	return (-1);
}
