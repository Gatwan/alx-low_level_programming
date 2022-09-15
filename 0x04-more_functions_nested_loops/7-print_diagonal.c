#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: parameter
 */
void print_diagonal(int n)
{
	int count, bslash;

	bslash = 92;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			_putchar(bslash);
		}
		_putchar('\n');
	}
}
