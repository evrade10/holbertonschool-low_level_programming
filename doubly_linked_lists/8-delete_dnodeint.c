#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 * @head: pointer to the head of the list
 * @index: index where to delete the node
 * Return: 1 if SUCCESS -1 if it FAILED
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp1 = *head;
	dlistint_t *temp2 = *head;
	unsigned int count = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		temp = temp->next;
		temp->prev = NULL;
		free(*head);
		*head = temp;
		return (1);
	}
	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (!temp)
		return (-1);
	temp2 = temp->prev;
	if (!temp2)
	{
		free(temp);
		return (-1);
	}
	temp1 = temp->next;
	if (!temp1)
	{
		temp2->next = NULL;
		free(temp);
		return (1);
	}
	temp2->next = temp1;
	temp1->prev = temp2;
	free(temp);
	return (1);
}
