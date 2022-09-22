#include "main.h"
/**
*cap_string - capitalizes all words of a string
*
*@str: parameter string
*
*Return: capitalized string
*/
char *cap_string(char *str)
{
	int a;

	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
	for (a = 1; *(str + a) != '\0'; a++)
	{
		if (*(str + (a - 1)) == ' ' ||
		*(str + (a - 1)) == '\t' ||
		*(str + (a - 1)) == '\n' ||
		*(str + (a - 1)) == ',' ||
		*(str + (a - 1)) == ';' ||
		*(str + (a - 1)) == '.' ||
		*(str + (a - 1)) == '!' ||
		*(str + (a - 1)) == '?' ||
		*(str + (a - 1)) == '"' ||
		*(str + (a - 1)) == '(' ||
		*(str + (a - 1)) == ')' ||
		*(str + (a - 1)) == '{' ||
		*(str + (a - 1)) == '}')
		{
			if (*(str + a) >= 'a' && *(str + a) <= 'z')
			{
				*(str + a) -= 32;
			}
		}
		else
		{
		}

	}
	return (str);
}
