#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the int
 * @index: index to switch the value
 * Return: -1 if it fail else 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned int j = 1;
	unsigned int m;
	unsigned int o;

	if (!n)
		return (-1);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (i < index)
	{
		j = j << 1;
		i++;
	}
	m = *n ^ j;
	o = m | j;
	if (o == *n)
	{
		*n = m;
	}
	return (1);
}
