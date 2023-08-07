#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Const char pointer
 *
 * @text_content: Char pointer
 *
 * Return: int
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0, fdWrite;

	if (!filename)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
		length++;

	fd = open(filename, O_WRONLY | O_APPEND);
	fdWrite = write(fd, text_content, length);

	if (fd == -1 || fdWrite == -1)
		return (-1);

	close(fd);

	return (1);
}
