#include "main.h"
#include <stdlib.h>
/**
*str_concat - function that concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: concatenate string (success)
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, mal, i = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; *(s1 + len1); len1++)
	{
	}
	for (len2 = 0; *(s2 + len2); len2++)
	{
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (mal = 0; mal < (len1 + len2); mal++)
	{
		if (mal < len1)
		{
			*(concat + mal) = *(s1 + mal);
		}
		else
		{
			*(concat + mal) = *(s2 + i);
			i++;
		}
	}
	*(concat + mal) = '\0';
	s1 = concat;
	return (s1);
}
