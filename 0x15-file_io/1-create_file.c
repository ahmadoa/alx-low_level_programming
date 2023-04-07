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
	int rwr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
			size++;
	}

	filedesc = open(filedesc, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	rwr = write(filedesc, text_content, size);

	if (filedesc == -1 || rwr == -1)
		return (-1);

	close(filedesc);

	return (1);
}
