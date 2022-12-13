#include "main.h"
/**
*_strstr - finds the first occurrence of substring needle in string haystack
*@haystack: string
*@needle: substring
*Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int a, b, c, length, count;

	for (length = 0; needle[length] != '\0'; length++)
	{
	}
	if (length == 0)
	{
		return (haystack);
	}
	for (b = 0; haystack[b] != '\0'; b++)
	{
		a = 0;
		if (haystack[b] == needle[a])
		{
			c = b;
			for (count = 0; count < length; count++)
			{
				if (haystack[c] != needle[a])
				{
					break;
				}
				c++;
				a++;
			}
		}
		if (count == length)
		{
			break;
		}
	}
	if (*(haystack + b) != '\0')
	{
		return (haystack + b);
	}
	else
	{
		return ('\0');
	}
}
