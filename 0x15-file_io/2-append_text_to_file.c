#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Write a function that appends text at the end
 * of a file.
 * @filename: Is the name of the file.
 * @text_content: Is the NULL terminated string to add at the end of
 * the file.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t len, Bw;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fp = fopen(filename, "a");
	if (fp == NULL)
	{
		return (-1);
	}
	len = strlen(text_content);
	Bw = fwrite(text_content, 1, len, fp);
	fclose(fp);
	if (Bw == len)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
