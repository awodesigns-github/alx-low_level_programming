#include <stdio.h>

/**
 * main - return name of file
 *
 * @argc: the number of arguments passed
 * @argv: the pointer to the array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	int i;

	for (i = 0; i < 1; i++)
	{
	printf("%s\n", argv[0]);
	}
	}
	return (0);
}
