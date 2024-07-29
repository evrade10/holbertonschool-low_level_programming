#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_list - function that frees a list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;
	while (head->next)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
