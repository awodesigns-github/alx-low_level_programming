#include <stdio.h>

/**
* main - Main entry point
* Return: returns 0
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
