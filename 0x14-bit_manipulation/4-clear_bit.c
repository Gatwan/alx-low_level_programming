#include "main.h"
/**
*clear_bit - function that sets the value of a bit to 0 at a given index
*
*@n: pointer to value
*
*@index: index starting from 0 of the bit you want to set
*
*Return: 1 success else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > 63)
		return (-1);

	val = 1 << index;

	if (*n & val)
		*n ^= val;

	return (1);
}
