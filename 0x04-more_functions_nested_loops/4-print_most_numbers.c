#include "main.h"
/**
 * print_most_numbers - print numbers 0 to 9 except 4 and 2
 * Return: 0 (success)
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
		}
		else
		{
		_putchar(a);
		}
	}
	_putchar('\n');
}
