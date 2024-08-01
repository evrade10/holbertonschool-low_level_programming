#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - returns the sum of all the data of a list
 * @h: pointer to the pointer of the head of the list
 * @idx: index where it insert the new node
 * @n: data to store in the node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp = *h;
    dlistint_t *new;
    unsigned int count = 0;

    // Calculate the length of the list
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    // Check if the index is out of bounds
    if (idx > count)
        return (NULL);

    // Insert at the beginning
    if (idx == 0)
        return (add_dnodeint(h, n));

    // Insert at the end
    if (idx == count)
        return (add_dnodeint_end(h, n));

    // Reset temp to the head of the list
    temp = *h;
    count = 0;

    // Traverse to the node just before the insertion point
    while (temp && count < idx - 1)
    {
        temp = temp->next;
        count++;
    }

    // If temp is NULL, the index is out of bounds
    if (!temp)
        return (NULL);

    // Allocate memory for the new node
    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);

    // Set the data and pointers of the new node
    new->prev = temp;
    new->n = n;
    new->next = temp->next;

    // Update the next node's previous pointer if it exists
    if (temp->next)
        temp->next->prev = new;

    // Update the current node's next pointer
    temp->next = new;

    return (new);
}
 
