#include "main.h"
/**
*print_binary - function that prints the binary representation of a number
*
*@n: number to be printed
*/
void print_binary(unsigned long int n)
{
	unsigned int i;

	for (int i = 1 << 31; i > 0; i >>= 1)
	printf("%u", !!(n & i));
}
