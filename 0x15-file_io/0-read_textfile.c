#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: file
 * @letters: number of letters it should read and print
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int openfile, read_fd, write_fd;
	char *buff;

	if (!filename || !letters)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);

	openfile = open(filename, O_RDONLY);
	if (!openfile)
		return (0);

	read_fd = read(openfile, buff, letters);
	if (!read_fd)
		return (0);

	write_fd = write(STDOUT_FILENO, buff, read_fd);
	if (write_fd == -1)
		return (0);

	close(openfile);
	free(buff);
	return (read_fd);
}
