#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - program that adds positive numbers
*@argc: argument
*@argv: argument
*Return: 0 (success) else 1
*/
int main(int argc, char *argv[])
{
	int i, p, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (p = 0; argv[i][p] != '\0'; p++)
		{
			if (!isdigit(argv[i][p]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
