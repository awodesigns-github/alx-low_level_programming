#include <stdio.h>

/**
 * main - prints all arguments passed
 *
 * @argc: the number of arguments passed
 * @argv: all the arguments passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
