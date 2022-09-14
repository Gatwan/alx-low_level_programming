#include "main.h"
/**
 *print_sign - prints sign of a number
 *
 *@n: parameter
 *
 *Return: 1 (positive), 0 (zero), else -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
