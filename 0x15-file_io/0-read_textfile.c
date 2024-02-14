#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 *
 * @filename: string containing file name
 * @letters: size of the letters to read
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int *size;
	ssize_t file_r;
	ssize_t file_w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allocate memory */
	size = malloc(letters * sizeof(char));
	if (size == NULL)
	{
		free(size);
		close(fd);
		return (0);
	}

	/* reading the file */
	file_r = read(fd, size, letters);
	close(fd);
	if (file_r == -1)
	{
		free(size);
		return (0);
	}
	file_w = write(STDOUT_FILENO, size, file_r);
	free(size);
	if (file_r != file_w)
		return (0);
	return (file_w);
}
