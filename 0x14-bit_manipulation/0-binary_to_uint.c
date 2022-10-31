#include "main.h"
#include <stdio.h>
/**
*binary_to_uint - function that converts a binary number to an unsigned int
*
*@b: binary to be converted
*
*Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, power;

	if (!b)
	return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, power = 1; len >= 0; len--, power *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
		{
			i += power;
		}
	}
	return (i);
}
