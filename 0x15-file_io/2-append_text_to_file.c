#include "main.h"
#include <string.h>
#include <errno.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: null terminated string to append at the end
 *
 * Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t file_w;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_EXCL | O_APPEND);
	if (f == -1)
	{
		close(f);
		return (-1);
	}

	/* append contents to the end of the file */
	if (text_content)
	{
		file_w = write(f, text_content, strlen(text_content));
		if (file_w == -1)
			return (-1);
	}
	close(f);
	return (1);
}
