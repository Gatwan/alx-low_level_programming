#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: parameter
 */
void rev_string(char *s)
{
	int a, b, strlen, count;
	char string;

		for (strlen = 0; *(s + strlen) != '\0'; strlen++)
		{
		}

	b = strlen - 1;
	count = strlen;

	for (a = 0; a < strlen; a++)
	{
		if (count > 1)
		{
			string = *(s + a);
			*(s + a) = *(s + b);
			*(s + b) = string;
			b--;
			count -= 2;
		}
	}
}
