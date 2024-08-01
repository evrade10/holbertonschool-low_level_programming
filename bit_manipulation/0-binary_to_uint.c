#include <stdio.h>
#include "main.h"
/**
 * _strlen - count number of case in array
 * @s: string to count
 * Return: i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _pow - a pow b
 * @a: int
 * @b: pow
 * Return: apowb
 */
int _pow(int a, int b)
{
	int temp = a;

	if (b == 0)
		return (1);
	else if (b == 1)
		return (a);
	while (b > 1)
	{
		temp *= a;
		b--;
	}
	return (temp);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned long int i = 0;
	const char *temp;
	int lenb;
	int j = 0;

	if (!b)
		return (0);
	lenb = _strlen(b) - 1;
	temp = b;
	while (*temp != '\0')
	{
		if (*temp != 48 && *temp != 49)
			return (0);
		temp++;
	}
	while (lenb >= 0)
	{
		i += (_pow(2, lenb) * (b[j] - '0'));
		lenb--;
		j++;
	}
	return (i);
}
