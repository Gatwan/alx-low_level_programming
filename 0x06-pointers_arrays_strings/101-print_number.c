#include "main.h"
/**
*print_number - print an integer
*
*@n: parameter
*
*/
void print_number(int n)
{
	unsigned int divide, tempo, tempo1;

	if (n < 0)
	{
		tempo = -n;
		_putchar(45);
	}
	else
	{
		tempo = n;
	}

	divide = 1;
	tempo1 = tempo;

	while (tempo1 > 9)
	{
		tempo1 /= 10;
		divide *= 10;
	}

	while (divide >= 1)
	{
		_putchar(((tempo / divide) % 10) + 48);
		divide /= 10;
	}
}
