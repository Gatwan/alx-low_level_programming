#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *
 *@num: parameter
 *
 * Return: Last digit
 */
int print_last_digit(int num)
{
	int lastdigit;

	lastdigit = num % 10;

	if (lastdigit >= 0)
	{
		_putchar(lastdigit + 48);
			return (lastdigit);
	}
	else
	{
		_putchar(-lastdigit + 48);
		return (-lastdigit);
	}
}
