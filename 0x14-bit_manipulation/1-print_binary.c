#include "main.h"

/**
 * _power - calculates the base * power of a number
 *
 * @b: unsigned base itself
 * @p: unsigned exponent of the base
 *
 * Return: unsigned long integer
 */
unsigned long int _power(unsigned int b, unsigned int p)
{
	unsigned long int n = 1;
	unsigned int x;

	for (x = 1; x <= p; x++)
	{
		n *= b;
	}
	return (n);
}

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, c;
	char f;

	f = 0;
	div = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		c = n & div;
		if (c == div)
		{
			f = 1;
			_putchar('1');
		} else if (f == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
