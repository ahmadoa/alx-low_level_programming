#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads and prints text file content to STDOUT
 * @filename: name of file
 * @letters: number of letters to read and print
 * Return: number of letters it read and wrote, 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int filedesc;
	ssize_t wbt, rbt;

	if (filename == NULL)
		return (0);

	/* open file in read only mode */
	filedesc = open(filename, O_RDONLY);

	if (filedesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	/*read file and store number of read bytes*/
	rbt = read(filedesc, buffer, letters);
	/*write the letters to STDOUT instead of file*/
	wbt = write(STDOUT_FILENO, buffer, rbt);
	free(buffer);
	close(filedesc);
	return (wbt);
}
