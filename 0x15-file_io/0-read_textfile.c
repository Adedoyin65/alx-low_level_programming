#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - A function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: A pointer.
 * @letters: The number of letters it should print.
 * Return: returns the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t Bw, Br;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(fd);
		return (0);
	}
	Br = read(fd, str, letters);
	if (Br == -1)
	{
		close(fd);
		free(str);
		return (0);
	}
	Bw = write(STDOUT_FILENO, str, Br);
	if (Bw == -1 || Bw != Br)
	{
		close(fd);
		free(str);
		return (0);
	}
	close(fd);
	free(str);
	return (Bw);

}
