#include "main.h"
/**
*_strpbrk -  function that searches a string for any of a set of bytes
*@s: string to search
*@accept: string to search in
*Return: pointer to the byte in s that matches one of the bytes
*/
char *_strpbrk(char *s, char *accept)
{
	int a, boolean;

	boolean = 1;
	while (*s)
	{
		a = 0;
		while (*(accept + a))
		{
			if (*s == *(accept + a))
			{
				boolean = 0;
				break;
			}
			a++;
		}
		if (boolean == 0)
		{
			break;
		}
		s++;
	}
	if (*s != '\0')
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
