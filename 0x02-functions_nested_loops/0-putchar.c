#include "main.h"

/**
* main - Main Entry point
* Return: returns 0
*/
int main(void)
{
	int i = 0;
	char *word = "_putchar";

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}
	_putchar(10);
	return (0);
}
