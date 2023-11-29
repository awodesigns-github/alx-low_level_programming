#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: name of the file
 * @text_content: text to be added at the end
 *
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_EXCL | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write(fd, text_content, sizeof(text_content));
	if (errno == EEXIST)
		return (1);
	else if (errno == EACCES || errno == ENOENT)
		return (-1);
	else
		return (1);
}
