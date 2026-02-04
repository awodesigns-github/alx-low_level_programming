#include <stdio.h>

/**
* main - Main entry point
* Return: returns 0
*/
int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		if (i == 57)
		{
			putchar(i);
		} else
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
