#include <stdio.h>
#include "main.h"
/**
 * isupper - checks for uppercase character
 *
 * Return: 0 (success)
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		_putchar(c);
		return (1);
	}
	else
		return (0);
}
