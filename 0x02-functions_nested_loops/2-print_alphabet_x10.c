#include "main.h"

/**
* print_alphabet_x10 - prints lowercase alphabets 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar(10);
		i++;
	}
}
