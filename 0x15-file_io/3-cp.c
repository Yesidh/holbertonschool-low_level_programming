#include "holberton.h"
/**
 * close_fd - function that close two files using file descriptors
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
 * Return: nothing
 */
void close_fd(int fd1, int fd2)
{
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: cant't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd2);
		exit(100);
	}
}
/**
 * main - function that appends text at the end of a file
 * @argc: numbers of arguments
 * @a: array with arguments
 * Return: 1 on success -1 on failure
 */
int main(int argc, char **a)
{
	int  fd1, fd2, sbuf, sw;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd2 = open(a[2], O_RDWR | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a[2]);
		exit(99);
	}
	fd1 = open(a[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
		exit(98);
	}
	sbuf = 1024;
	while (sbuf == 1024)
	{
		sbuf = read(fd1, buf, 1024);
		if (sbuf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a[1]);
			exit(98);
		}
		sw = write(fd2, buf, sbuf);
		if (sw == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a[2]);
		exit(99);
		}
	}
	close_fd(fd1, fd2);
	return (0);
}
