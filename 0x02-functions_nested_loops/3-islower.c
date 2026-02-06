#include "main.h"

/**
* _islower - checks lowercase character
* @c: an integer that represents an ascii character
*
* Return: returns 1 if lowercase otherwise 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
