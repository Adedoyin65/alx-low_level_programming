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
	ssize_t Bo, Br, Bw;
	char *str;

	if (filename == NULL)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		return (0);
	}
	Bo = open(filename, O_RDONLY);
	Br = read(Bo, str, letters);
	Bw = write(STDOUT_FILENO, str, Br);
	if (Bo == -1 || Br == -1 || Bw == -1 || Bw != Br)
	{
		free(str);
		return (0);
	}
	free(str);
	close(Bo);
	return (Bw);
}
