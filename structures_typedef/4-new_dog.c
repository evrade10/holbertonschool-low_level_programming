#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - count number of characters in a string
 * @s: string to count
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to copy
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len, i;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';
	return (duplicate);
}

/**
 * new_dog - create a new dog instance
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_instance;

	dog_instance = malloc(sizeof(dog_t));
	if (dog_instance == NULL)
		return (NULL);
	dog_instance->name = _strdup(name);
	if (dog_instance->name == NULL)
	{
		free(dog_instance);
		return (NULL);
	}
	dog_instance->age = age;
	dog_instance->owner = _strdup(owner);
	if (dog_instance->owner == NULL)
	{
		free(dog_instance->name);
		free(dog_instance);
		return (NULL);
	}
	return (dog_instance);
}
