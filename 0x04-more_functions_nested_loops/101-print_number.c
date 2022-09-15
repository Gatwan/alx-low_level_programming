#include "main.h"

/**
 * print_number - prints an integer
 * @n: parameter
 * Return: 0 (success)
 */
void print_number(int n)
{
	unsigned int num, count, A;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	A = num;
	count = 1;

	while (A > 9)
	{
		A /= 10;
		count = count * 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + 48);
	}
}
