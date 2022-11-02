#include "main.h"
/**
*append_text_to_file - function that appends text at the end of a file
*
*@filename: name of the file
*
*@text_content: NULL terminated string to add at the end of the file
*
*Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int arry;
	FILE *ptrfile;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	ptrfile = fopen(filename, "a");

	if (ptrfile == NULL)
		return (-1);

	arry = 0;

	while (text_content[arry] != '\0')
	{
		putc(text_content[arry], ptrfile);
		arry++;
	}
	fclose(ptrfile);

	return (1);
}
