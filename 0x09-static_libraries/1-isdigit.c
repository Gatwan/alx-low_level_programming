#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: parameter
 * Return: 0 (notdigit)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}