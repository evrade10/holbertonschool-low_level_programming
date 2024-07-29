#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - count number of case in array
 * @s: string to count
 * Return: i
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @str: string to duplicate
 * Return: pointer to the head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str || !head)
		free(new);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
