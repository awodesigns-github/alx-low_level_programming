#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 *
 * @n: unsigned integer constant
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
