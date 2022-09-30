#include <stdio.h>
/**
*main - prints the number of arguments passed into it
*@argc: no of arguments
*@argv: string arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void) argv;
	return (0);
}
