#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division of a by b
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reaminder of division
 *
 * @a: integer a
 * @b: int b
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
