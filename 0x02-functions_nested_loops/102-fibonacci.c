#include <stdio.h>
#include "main.h"
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int before, current, after;
	int count;

	before = 1;
	current = 2;
	after = before + current;

	printf("%ld, %ld", before, current);

	for (count = 2; count < 50; count++)
	{
	after = before + current;
printf(", %ld", after);
before = current;
current = after;
	}
	printf("\n");
	return (0);
}
