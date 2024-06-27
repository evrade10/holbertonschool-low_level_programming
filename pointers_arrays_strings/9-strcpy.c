#include "main.h"
/**
 * _strcpy - function that copy the string
 * @dest: return value
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c]; c++)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';

	return (dest);
}
