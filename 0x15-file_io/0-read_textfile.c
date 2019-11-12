#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer;
	ssize_t n_bytes, a_bytes;

	if (!filename)
	{
		return (0);
	}

	buffer = malloc(sizeof(size_t) * letters);
	if (!buffer)
	{
		return ('\0');
	}

	if(fd == -1)
	{
		free(buffer);
		return (0);
	}
	else
	{
		n_bytes = read(fd, buffer, letters);
		a_bytes = write(STDOUT_FILENO, buffer, n_bytes);

		if(n_bytes == 0)
		{
			free(buffer);
			return (0);
		}
		else
		{
			return (n_bytes);
		}
	close(fd);
	}

	return (a_bytes);
}
