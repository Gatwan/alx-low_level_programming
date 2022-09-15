#include <stdio.h>

/**
 * main - prints the largest prime factor of the number
 * Return: 0 (success)
 */
int main(void)
{
	long int ref, lpf;

	ref = 612852475143;

	for (lpf = 2; lpf <= ref; lpf++)
	{
		if (ref % lpf == 0)
		{
			ref = ref / lpf;
			lpf--;
		}
	}
	printf("%ld\n", lpf);
	return (0);
}
