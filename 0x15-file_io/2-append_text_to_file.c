#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: content to write in the file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ch1;
	ssize_t ch2;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	ch1 = strlen(text_content);
	ch2 = write(fd, text_content, ch1);
	if (ch2 == -1)
		return (-1);
	close(fd);
	return (1);
}
