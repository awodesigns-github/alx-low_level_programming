#include "main.h"
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a newly allocated space s1 + s2
 *
 * @s1: string
 * @s2: string
 *
 * Return: NULL on empty or failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	k = i + j;
	str = malloc((k * sizeof(char)) + 1);
	j = 0;
	if (str == NULL)
		return (NULL);
	while (l < k)
	{
	if (l <= i)
	{
	str[l] = s1[l];
	}
	if (l > i)
	{
	str[l] = s2[j];
	j++;
	}
	l++;
	}
	str[l] = '\0';
	return (str);
}
