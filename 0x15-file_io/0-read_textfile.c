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
	fd = open(filename, O_CREAT | O_RDWR);
	if (fd == -1)
		return (0);

	/* allocate memory */
	size = malloc(letters * sizeof(int));
	if (size == NULL)
		return (0);

	/* reading the file */
	file_r = read(fd, size, letters);
	if (file_r == -1)
		return (0);

	/* writting to the file */
	file_w = write(fd, size, letters);
	if (file_w == -1)
		return (0);
	return (file_r);
}
