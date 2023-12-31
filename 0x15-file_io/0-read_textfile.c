#include "main.h"

/**
 * read_textfile- reads a text file and prints it to
 *	the POSIX standard output
 * @filename: the file name
 * @letters: number of letters it should read and print
 * Return: actual number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[BUF_SIZE * 8];
	int fd;
	ssize_t rw;

	if (filename == NULL || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rw = read(fd, buff, letters);
	rw = write(STDOUT_FILENO, buff, rw);

	close(fd);
	return (rw);
}
