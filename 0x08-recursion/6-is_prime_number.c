#include "main.h"

int prime_checker(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is prime else 0
 *
 * @n: the input integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	return (prime_checker(n, 1));
}

/**
 * prime_checker - returns 1 if the input is prime else 0
 *
 * @n: the input integer
 * @i: the iteration count
 *
 * Return: integer
 */
int prime_checker(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime_checker(n, i + 1));
}
