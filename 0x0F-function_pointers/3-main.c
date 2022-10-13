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
	int ans, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
		&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] == '/' && b == 0) ||
		(*argv[2] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	ans = (int)(get_op_func(argv[2])(a, b));

	printf("%d\n", ans);
	return (0);
}
