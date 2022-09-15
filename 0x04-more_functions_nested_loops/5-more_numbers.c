#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int num1, count, num2;

	for (count = 0; count < 10; count++)
	{
		for (num1 = 48; num1 < 50; num1++)
		{
			for (num2 = 48; num2 < 58; num2++)
			{
				if (num1 > 48 && num2 > 52)
				{
					break;
				}
				if (num1 > 48)
				{
					_putchar(num1);
				}
				_putchar(num2);
			}
		}
		_putchar('\n');
	}
}
