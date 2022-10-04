#include "main.h"
#include <stdlib.h>
/**
* create_array - creates array of chars, and initializes with specific char
*@size: array size
*@c: character
*Return: array (success) else NULL
*/
char *create_array(unsigned int size, char c)
{
	char *point;
	unsigned int mal;

	if (size == 0)
	{
		return ('\0');
	}
	point = malloc(sizeof(char) * size);

	if (point == NULL)
	{
		return ('\0');
	}
	else
	{
		for (mal = 0; mal < size; mal++)
		{
			point[mal] = c;
		}
	return (point);
	}
}
