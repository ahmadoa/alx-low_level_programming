#include <stdio.h>
#include "main.h"

/**
 * ReadERR - error if reading from file fails
 * @argv: array of passed args
 * Return: void
 */
void ReadERR(char *argv[])
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}

/**
 * WriteERR - error if writing into file fails
 * @argv: passed args
 * Return: void
 */
void WriteERR(char *argv[])
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}

/**
 * main - program that copies content of file into another
 * @argc: number of passed args
 * @argv: array of passed args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, closeERR;
	ssize_t nbrfr = 1024, nbwrto;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (file_form == -1)
		ReadERR(argv);
	if (file_to == -1)
		WriteERR(argv);
	while (nbrfr == 1024)
	{
		nbrfr = read(file_from, buffer, 1024);
		if (nbrfr == -1)
			ReadERR(argv);
		nbwrto = write(file_to, buffer, nbrfr);
		if (nbwrto == -1)
			WriteERR(argv);
	}
	closeERR = close(file_from);
	if (closeERR == -1)
	{
		dprintf(STDERR_FILENO, "Error, Can't close fd %d\n", file_from);
		exit(100);
	}
	closeERR = close(file_to);
	if (closeERR == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
