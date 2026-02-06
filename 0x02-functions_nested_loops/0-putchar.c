#include "main.h"
#include <string.h>

/**
* main - Main Entry point
* Return: returns 0
*/
int main(void)
{
	int i;
	char *word = "_putchar";
	int length = strlen(word);

	for (i = 0; i < length; i++)
	{
		_putchar(word[i]);
	}
	_putchar(32);
	return (0);
}
