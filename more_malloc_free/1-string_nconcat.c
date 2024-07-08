#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *vid, *pad;
	unsigned int i, j, len;
	unsigned int size;

	len = 0;
	i = 0;
	j = 0;
	vid = "";
	if (s1 == NULL)
		s1 = vid;
	if (s2 == NULL)
		s2 = vid;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*pad);
	pad = malloc(size + 1);
	if (pad == NULL)
		return (NULL);
	while (i < size && s1[i] != '\0')
	{
		pad[i] = s1[i];
		i++;
	}
	while (i < size && s2[j] != '\0')
	{
		pad[i] = s2[j];
		i++;
		j++;
	}
	pad[i] = '\0';
	return (pad);
}
