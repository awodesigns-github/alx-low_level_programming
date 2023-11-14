#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: string separator
 * @n: unsigned integer constant
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);
		printf("%s", str);
		if (str == NULL)
		{
			printf("(nil)");
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
