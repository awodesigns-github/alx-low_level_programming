#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the arguments followed by a new line
 *
 * @argc: number of arguments passed
 * @argv: the arguments passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	for (i = 1; i < argc; i++)
	{
	mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
