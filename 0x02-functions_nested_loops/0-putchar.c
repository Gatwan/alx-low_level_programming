#include "main.h"
/**
 * main - putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char A[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int counter;

	for (counter = 0; counter <= 7; counter++)
	{
		_putchar(A[counter]);
	}

	_putchar('\n');
	return (0);
}
