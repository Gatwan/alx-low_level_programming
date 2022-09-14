#include <stdio.h>
#include "main.h"
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (success)
 */
int main(void)
{
	int sum, ref, num;

	sum = 0;
	ref = 1024;

	for (num = 0; num < ref; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
