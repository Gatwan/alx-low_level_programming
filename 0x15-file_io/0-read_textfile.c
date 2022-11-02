#include "main.h"
/**
*read_textfile - function that reads a text file
*
*@filename: pointer to file to be read
*
*@letters: number of letters it should read and print
*
*Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t num;
	FILE *ptrfile;
	int i;

	num = 0;

	if (filename == NULL)
		return (0);

	ptrfile = fopen(filename, "r");

	if (ptrfile == NULL)
		return (0);

	i = fgetc(ptrfile);

	while (num < letters && i != EOF)
	{
		write(STDOUT_FILENO, &i, 1);
		i = fgetc(ptrfile);
		num++;
	}
	fclose(ptrfile);

	return (num);
}
