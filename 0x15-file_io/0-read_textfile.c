#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it.
 *
 * @filename: const char type pointer to file to be read
 *
 * @letters: size_t type
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t fp, fpRead, fpWrite;
	char *lineBuffer;

	if (filename == NULL)
		return (0);

	lineBuffer = malloc(sizeof(char) * letters);

	if (lineBuffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	fpRead = read(fp, lineBuffer, letters);
	fpWrite = write(STDOUT_FILENO, lineBuffer, fpRead);

	if (fp == -1 || fpRead == -1 || fpWrite == -1 || fpWrite != fpRead)
	{
		free(lineBuffer);
		return (0);
	}

	free(lineBuffer);
	close(fp);

	return (fpWrite);
}

