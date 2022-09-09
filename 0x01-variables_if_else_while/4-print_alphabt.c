#include <stdio.h>
/**
 * main - Putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == 'q' || lowercase == 'e')
		{
		}
		else
		{
			putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}
