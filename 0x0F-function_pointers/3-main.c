#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - testing functionality
 *
 * @argc: number of arguments passed in
 * @argv: the arguments themselves
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *operator;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);
	if ((*operator == '/' && b == 0) || (*operator == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(operator) == NULL || *operator == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(operator)(a, b));
	return (0);
}
