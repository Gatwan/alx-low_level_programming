#include "main.h"
/**
*_strspn - function that gets the length of a prefix substring
*@s: string
*@accept: acceptable characters
*Return: length of acceptable string
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, count;
	int boolean;

	a = 0;
	count = 0;

	while (s[a] != '\0' && s[a] != ' ')
	{
		boolean = 1;
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				boolean = 0;
				count++;
				break;
			}
		}
		if (boolean == 1)
		{
			break;
		}
		a++;
	}
	return (count);
}
