#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x
 */
void print_alphabet_x10(void)
{
	char lowercase;

	int a;

	for (a = 0; a <= 9; a++)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}
		_putchar('\n');
	}
}
