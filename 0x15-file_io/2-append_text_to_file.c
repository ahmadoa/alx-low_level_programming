#include "main.h"

/**
 * append_text_to_file - appends text content to file
 * @filename: name of file to use
 * @text_content: the text to be appended to file
 * Return: 1 if it successed, -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int size = 0;
	int filedesc;
	int rwr;

	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
			size++;
	}

	if (filename == NULL || text_content == NULL)
		return (-1);

	filedesc = open(filename, O_WRONLY | O_APPEND);

	if (filedesc == -1)
		return (-1);

	rwr = write(filedesc, text_content, size);

	if (rwr == -1)
		return (-1);

	close(filedesc);
	return (1);
}
