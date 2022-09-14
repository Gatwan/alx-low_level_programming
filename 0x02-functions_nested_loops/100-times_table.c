#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: parameter integer
 */
void print_times_table(int n)
{
	int c, cI, num, op, ref;

	cI = 0;
	if (n < 0 || n > 15)
	{
	}
	else
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(48);
			for (num = 0; num < n; num++)
			{
				_putchar(',');
				_putchar(32);
				ref = c;
				op = ref + (cI * num);
				if (op <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(op + 48);
				}
				else if (op <= 99)
				{
					_putchar(32);
					_putchar((op / 10) + 48);
					_putchar((op % 10) + 48);
				}
				else
				{
					_putchar((op / 100) + 48);
					_putchar((op % 100) / 10) + 48);
					_putchar((op % 10) + 48);
				}
		}
			cI = cI + 1;
			_putchar('\n');
	}
}
