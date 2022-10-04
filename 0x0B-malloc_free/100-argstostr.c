#include "main.h"
#include <stdlib.h>
/**
*argstostr - function that concatenates all the arguments of your program
*@ac: arguments
*@av: argument vector
*Return: pointer to concatenated string argument
*/
char *argstostr(int ac, char **av)
{
	int mal, arry, len = 0, concat = 0;
	char *string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (mal = 0; mal < ac; mal++)
	{
		arry = 0;
		while (av[mal][arry] != '\0')
		{
			arry++;
			len++;
		}
	}
	string = malloc(sizeof(char) * (len + ac + 1));
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}
	for (mal = 0; mal < ac; mal++)
	{
		arry = 0;
		while (av[mal][arry] != '\0')
		{
			string[concat] = av[mal][arry];
			concat++;
			arry++;
		}
		string[concat] = '\n';
		concat++;
	}
	return (string);
}
