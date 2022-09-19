#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy string
 * @dest: buffer
 * @src: string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; *(src + c) != '\0'; c++)
	{
		*(dest + c) = *(src + c);
	}
	*(dest + c) = *(src + c);
	return (dest);
}
