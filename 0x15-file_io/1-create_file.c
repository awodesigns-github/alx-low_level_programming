#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file created
 * @text_content: a null terminated string
 *
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_w = write(fd, text_content, sizeof(text_content));
		if (bytes_w == -1)
			return (-1);
	}
	return (1);
}
