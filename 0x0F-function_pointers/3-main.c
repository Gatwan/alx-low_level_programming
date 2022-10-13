#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*main - calculate
*
*@argc: number of arguments
*@argv: argument vector
*
*Return: 0 success
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*ans)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	ans = get_op_function(argv[2]);

	if (ans == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", ans(a, b));
	return (0);
}
