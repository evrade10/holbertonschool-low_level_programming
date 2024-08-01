#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the int
 * @index: index to switch the value
 * Return: -1 if it fail else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	int j = 1;

	if (!n)
		return (-1);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (i < index)
	{
		j = j << 1;
		i++;
	}
	*n = *n | j;
	return (1);
}
