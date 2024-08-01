#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: pointer to the head of the list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
