#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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
	ssize_t lo, lr, lw;
	char *buf;

	if (filename == NULL)
		return (0);


	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	lo = open(filename, O_RDONLY);
	lr = read(lo, buf, letters);
	lw = write(STDOUT_FILENO, buf, lr)
	if (lo == -1 || lr == -1 || lw == -1 || lw != lr)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(lo);

	return (lw);
}

