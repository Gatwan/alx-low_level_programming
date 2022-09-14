#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int num1, numincrement, num, output, ref;

	numincrement = 0;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar(48);
		for (num = 0; num < 9; num++)
		{
			ref = num1;
			output = ref + (numincrement * num);
			if (output <= 9)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(output + 48);
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar((output / 10) + 48);
				_putchar((output % 10) + 48);
			}
		}
		numincrement = numincrement + 1;
		_putchar('\n');
	}
}
