#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function that prints all the elements of a list
 * @h: pointer to the head of the list
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
