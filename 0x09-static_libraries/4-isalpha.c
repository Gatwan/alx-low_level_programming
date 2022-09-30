#include "main.h"
/**
 * _isalpha - print alphabet
 *
 * @c: parameter char
 *
 * Return: 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
