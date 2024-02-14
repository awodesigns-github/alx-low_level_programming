#include "main.h"

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

	if (filename == NULL)
		return (-1);
}
