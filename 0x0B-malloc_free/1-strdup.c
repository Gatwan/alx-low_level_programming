#include "main.h"
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter
*@str: pointer
*Return: copy of the string (success) else NULL
*/
char *_strdup(char *str)
{
	int len, mal;
	char *copstr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; *(str + len) != '\0'; len++)
	{
	}
	copstr = malloc(sizeof(char) * (len + 1));

	if (copstr == NULL)
	{
		return (NULL);
	}
	for (mal = 0; mal < len; mal++)
	{
		copstr[mal] = str[mal];
	}
	return (copstr);
}
