#include <stdio.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: the number of arguments passed
 * @argv: the pointer to an array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
