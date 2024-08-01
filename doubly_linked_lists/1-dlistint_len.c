#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - function that returns the number of elements of the list
 * @h: pointer to the head of the list
 * Return: number of elements of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
