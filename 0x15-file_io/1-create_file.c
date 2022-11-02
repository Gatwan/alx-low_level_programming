#include "main.h"
/**
*create_file -  function that creates a file
*
*@filename: name of the file to create
*
*@text_content: NULL terminated string to write to the file
*
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int arry;
	FILE *ptrfile;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	ptrfile = fopen(filename, "w");

	if (ptrfile == NULL)
		return (-1);

	chmod(filename, 0600);

	arry = 0;

	while (text_content[arry] != '\0')
	{
		putc(text_content[arry], ptrfile);
		arry++;
	}
	fclose(ptrfile);

	return (1);
}
