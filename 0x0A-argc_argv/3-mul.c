#include <stdio.h>
#include <stdlib.h>
/**
*main - program that multiplies two numbers
*@argc: argument
*@argv: argument
*Return: 1 if error esle 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
	return (0);
}
