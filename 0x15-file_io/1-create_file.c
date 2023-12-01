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
	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	bytes_w = write(fd, text_content, strlen(text_content));
	if (bytes_w == -1)
		return (-1);
	close(fd);
	return (1);
}
