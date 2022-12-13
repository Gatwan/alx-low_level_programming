#include "main.h"
/**
 * _islower - checks lowercase
 *
 * @c: parameter for a char
 *
 * Return: 1 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
