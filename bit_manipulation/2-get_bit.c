#include <stdio.h>
#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the bit
 * @index: index to get the value
 * Return: if it fail else the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (!n)
		return (-1);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (i < index)
	{
		n /= 2;
		i++;
	}
	i = n % 2;
	return (i);
}
