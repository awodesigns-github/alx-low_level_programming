#include "main.h"

/**
 * _strdup - returns a pointer to a new duplicate string
 *
 * @str: the input string to duplicate
 *
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *lestring;
	int counter1 = 1, counter2 = 0;

	if (str == NULL)
		return (NULL);
	while (str[counter1])
		counter1++;
	lestring = malloc((counter1 * sizeof(char)) + 1);
	if (lestring == NULL)
		return (NULL);
	while (counter2 < counter1)
	{
	lestring[counter2] = str[counter2];
	counter2++
	}
	lestring[counter2] = '\0';
	return (lestring);
}
