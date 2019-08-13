#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file
 * @letters: numbers of letters it should read and print
 * Return: numbers of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t ch1, ch2;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ch1 = read(fd, buf, letters);
	ch2 = write(1, buf, ch1);
	if (ch2 == 0)
		return (0);
	free(buf);
	close(fd);
	return (ch2);
}
