#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output
 *
 * @letters: the number of letters it should read and print
 * @filename: if filename is NULL return 0
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lr, lw;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	lr = read(fd, buf, letters);
	close(fd);
	if (lr == -1)
	{
		free(buf);
		return (0);
	}
	lw = write(STDOUT_FILENO, buf, lr);
	free(buf);
	if (lr != lw)
		return (0);
	return (lw);
}

