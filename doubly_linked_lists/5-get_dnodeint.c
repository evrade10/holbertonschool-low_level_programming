#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: index
 * Return: pointer to the nth element of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (!head)
		return (NULL);
	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (count < index)
		return (NULL);
	return (temp);
}
