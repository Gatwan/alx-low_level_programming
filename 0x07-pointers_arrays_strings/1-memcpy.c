#include "main.h"
/**
* _memcpy - function that copies memory area
*@dest: parameter to be copied to
*@src: parameter to copy
*@n: copied number of bytes
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
