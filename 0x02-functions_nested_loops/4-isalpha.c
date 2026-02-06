#include "main.h"

/**
* _isalpha - checks if a letter is lower or upper
* @c: an integer representing ascii
*
* Return: returns 1 if lowercase or uppercase else 0
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
