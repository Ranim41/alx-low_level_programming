#include "main.h"

/**
 * create_file- function create a file
 * @filename: the name file
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
