#include "main.h"
/**
*leet - encode a string into 1337
*
*@str:
*
*Return: encode string
*/
char *leet(char *str)
{
	int a, b;

	char arr[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char let[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (str[a] == let[b])
			{
				str[a] = arr[b];
			}
		}
	}
	return (str);
}
