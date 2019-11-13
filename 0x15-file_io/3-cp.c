#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: amount of arguments
 * @argv: pointer to pointers, arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int f_from, f_to;
	char buffer[1024];
	ssize_t n_from = 1, n_to = 1;
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	while (n_from)
	{
		n_from = read(f_from, buffer, 1024);
		if (n_from == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		if (n_from > 0)
			n_to = write(f_to, buffer, n_from);
			if (n_to == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
	}
	n_to = close(f_from);
	if (n_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);

	n_to = close(f_to);
	if (n_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);

	return (0);
}
