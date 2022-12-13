#include "main.h"
/**
*_strncat - concatenate string
*
*@dest: parameter string
*
*@src: parameter string
*
*@n: number of bytes
*
*Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, b, count;

	count = 0;

	for (a = 0; *(dest + a) != '\0'; a++)
	{
	}

	for (b = 0; count < n && *(src + b) != '\0'; b++)
	{
		count++;
		*(dest + a) = *(src + b);
		a++;
	}
	return (dest);
}
