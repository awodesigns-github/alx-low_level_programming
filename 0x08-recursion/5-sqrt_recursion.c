#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the natural number to calculate the square root for
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(int n, 1));
}
/**
 * _sqrt - returns the natural square root of a number
 *
 * @n: the natural number itself
 * @i: the number of iterations
 *
 * Return: integer
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
