#include "main.h"
#include <stdlib.h>
/**
*word_len - function that determines word length
*@str: string to search
*Return: length of word
*/
int word_len(char *str)
{
	int a = 0, length = 0;

	while (*(str + a) && *(str + a) != ' ')
	{
		a++;
		length++;
	}
	return (length);
}

/**
*count_words - counts number of words
*@str: string to search
*Return: number of words
*/
int count_words(char *str)
{
	int a = 0, num = 0, length = 0;

	for (a = 0; *(str + a); a++)
	length++;

	for (a = 0; a < length; a++)
	{
		if (*(str + a) != ' ')
		{
			a += word_len(str + a);
			num++;
		}
	}
	return (num);
}

/**
*strtow - splits string into two words
*@str: string to split
*Return: pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	int a = 0, words, lett, b, d;
	char **pointer;

	if (str == NULL || str[0] == '\0')
	return (NULL);

	words = count_words(str);
	if (words == 0)
	return (NULL);

	pointer = malloc(sizeof(char *) * (words + 1));
	if (pointer == NULL)
	return (NULL);

	for (b = 0; b < words; b++)
	{
		while (str[a] == ' ')
		a++;

		lett = word_len(str + a);
		pointer[b] = malloc(sizeof(char) * (lett + 1));

		if (pointer[b] == NULL)
		{
			for (; b >= 0; b--)
			free(pointer[b]);

		free(pointer);
		return (NULL);
		}

		for (d = 0; d < letters; d++)
			pointer[b][d] = str[a++];

		pointer[b][d] = '\0';
	}
	pointer[b] = NULL;
	return (pointer);
}
