#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints sum of two diagonals of a square matrix of integers
*@a: array
*@size: size of array
*/
void print_diagsums(int *a, int size)
{
	int diagsum1, diagsum2, g, w;

	diagsum1 = 0;
	diagsum2 = 0;
	for (g = 0; g < size; g++)
	{
		diagsum1 += a[(size + 1) * g];
	}
	for (w = 0; w < size; w++)
	{
		diagsum2 += a[(size - 1) * (w + 1)];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
