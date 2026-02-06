#include "main.h"

/**
* _abs - computes the absolute of an integer
* @a: integer
*
* Return: returns the absolute value of an integer
*/
int _abs(int a)
{
	if (a < 0)
	{
		return(a * -1);
	}
	return (a);
}
