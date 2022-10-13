#include "function_pointers.h"
/**
*main - check code
*@argc: argument count
*@argv: argument vector
*Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	char *arry = (char *) main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < (atoi(argv[1])); i++)
	{
		if (i == (atoi(argv[1]) - 1))
		{
			printf("%02hhx\n", arry[i]);
			break;
		}
		printf("%02hhx ", arry[i]);
	}
	return (0);
}
