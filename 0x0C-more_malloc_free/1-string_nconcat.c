#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - function that concatenates two strings
*@s1: first string
*@s2: string to be concatenated
*@n: number of bytes to be concanated
*Return: concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len, s2len, p = 0, q;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1len = 0; *(s1 + s1len) != '\0'; s1len++)
	{
	}
	for (s2len = 0; *(s2 + s2len) != '\0'; s2len++)
	{
	}

	if (n >= s2len)
		n = s2len;

	concat = malloc(sizeof(char) * (s1len + n + 1));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (q = 0; q < (s1len + n); q++)
	{
		if (q >= s1len)
		{
			concat[q] = s2[p];
			p++;
		}
		else if (q < s1len)
		{
			concat[q] = s1[q];
		}
	}
	concat[q] = '\0';
	return (concat);
}
