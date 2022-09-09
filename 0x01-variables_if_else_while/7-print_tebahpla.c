#include <stdio.h>
/**
 * main - Reverse alphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphrev;

	for (alphrev = 'z'; alphrev >= 'a'; alphrev--)
	{
		putchar(alphrev);
	}
	putchar('\n');
	return (0);
}
