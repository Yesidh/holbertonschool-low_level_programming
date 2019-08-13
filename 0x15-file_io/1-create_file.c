#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content to write in the file
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ch1;
	ssize_t ch2;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	ch1 = strlen(text_content);
	ch2 = write(fd, text_content, ch1);
	if (ch2 == -1)
		return (-1);
	close(fd);
	return (1);
}
