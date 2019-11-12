#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _strlen(char *s);

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name of file
 * @text_content: chars to put into the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND, 0600);

	if (!text_content)
	{
		return (1);
	}

	if (fd == -1)
	{
		return (-1);
	}
	else
	{

		write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: char pointer
 *
 * Return: 0.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
