#include "main.h"

/**
 * create_file - a function that creates and writes into file
 * @filename: name of file
 * @text_content: the text to write into the file
 * Return: -1 if any operation fails, 1 if it successed
 */

int create_file(const char *filename, char *text_content)
{
	int filedesc;
	int size = 0;
	/*rwr a var to check the return of write and if it was successfull*/
	int rwrite;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[size] != '\0')
		size++;

	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	rwrite = write(filedesc, text_content, size);

	if (rwrite == -1 || filedesc == -1)
		return (-1);

	close(filedesc);

	return (1);
}
