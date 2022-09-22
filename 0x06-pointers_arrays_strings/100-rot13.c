#include "main.h"
/**
*rot13 - encodes a string using rot13
*
*@str: parameter string
*
*Return: encode string
*/
char *rot13(char *str)
{
	int a, b;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; *(str + a) != '\0'; a++)
	{
		for (b = 0; *(letters + b) != '\0'; b++)
		{
			if (*(str + a) == *(letters + b))
			{
				*(str + a) = *(rot13 + b);
				break;
			}
		}
	}
	return (str);
}
