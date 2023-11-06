#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - length of the string
 *
 * @str: the string
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
 * _strcpy - copies a string from source to destination
 *
 * @src: string source
 * @dest: string dest
 *
 * Return: dest
 */
char *_strcpy(char *src, char *dest)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
	i++;
	}
	for (j = 0; j < i; j++)
	{
	dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lengthName = _strlen(name);
	int lengthOwner = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc((sizeof(char) * lengthName) + 1);
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc((sizeof(char) * lengthOwner) + 1);
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(name, dog->name);
	_strcpy(owner, dog->owner);
	dog->age = age;
	return (dog);
}
