#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: parameter
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	unsigned int num = 0, n, a;
	int sign = 1;

	for (n = 0; *(s + n) != '\0'; n++)
	{
	}

	for (a = 0; a < n; a++)
	{
		if (s[a] == '-')
			sign *= -1;

		else if (s[a] >= '0' && s[a] <= '9')
			num = num * 10 + (s[a] - 48);
		else if (num > 0)
			break;
	}
	return (num * sign);
}
