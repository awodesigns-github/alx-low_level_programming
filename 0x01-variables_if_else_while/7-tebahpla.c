#include <stdio.h>

/**
* main - Main entry point
* Return: returns 0
*/
int main(void)
{
	int i = 122;

	for (; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
