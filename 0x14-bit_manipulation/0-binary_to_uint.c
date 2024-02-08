#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary to unsigned int
 *
 * @b: pointer to a string
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int length = strlen(b);
	int i;

	if (b == NULL)
	{
		return (0);
	}
	/* converting the binary to decimal */
	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			conv += 1 << (length - i - 1);
		}
	}
	return (conv);
}
