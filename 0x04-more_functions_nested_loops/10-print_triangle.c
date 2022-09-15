#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter
 */
void print_triangle(int size)
{
	int (c1, c2, c3);

	if (size > 0)
	{
		for (c1 = 1; c1 <= size; c1++)
		{
		for (c2 = 1; c2 <= (size - c1); c2++)
		{
			_putchar(' ');
		}
		for (c3 = 0; c3 <= (size - c2); c3++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
