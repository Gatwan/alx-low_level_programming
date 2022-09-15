#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: parameter
 */
void print_diagonal(int n)
{
	int count1, count2, bslash;

	bslash = 92;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count1 = 0; count1 < n; count1++)
		{
			for (count2 = 0; count2 < (count1); count2++)
			{
			_putchar(' ');
			}
		_putchar(bslash);
		_putchar('\n');
		}
	}
}
