#include "main.h"
#include <string.h>

/**
 * create_file - function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 *
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t file_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	/* write text content to the file */
	if (!text_content)
		text_content = "";
	file_w = write(fd, text_content, strlen(text_content));
	if (file_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
