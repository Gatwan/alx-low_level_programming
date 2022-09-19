#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: parameter
 * Return: no return
 */
void print_rev(char *s)
{
	int a, strlen;

	for (strlen = 0; *(s + strlen) != '\0'; strlen++)
	{
	}

	for (a = (strlen - 1); a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
