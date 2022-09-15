#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: parameter
 * Return: 0 (success)
 */
void print_line(int n)
{
	int count, line;

	line = 95;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar(line);
		}
		_putchar('\n');
	}
}
