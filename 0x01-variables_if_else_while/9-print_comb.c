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
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
