#include <stdio.h>
#include "main.h"
/**
 * print_numbers -  function that prints the numbers, from 0 to 9
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int a;

	for (a >= 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
