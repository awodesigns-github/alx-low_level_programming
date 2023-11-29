#include "main.h"

/**
 * read_textfile - reads text file and prints it to the STDOUT
 *
 * @filename: filename to read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int bytes_r, bytes_w, fd;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_r = read(fd, buffer, letters);
	if (bytes_r == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_w);
}
