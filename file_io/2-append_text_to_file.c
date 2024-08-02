#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * _strlen - return legth of the string
 * @s: string
 * Return: int
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * append_text_to_file - function that append text to file
 * @filename: string that contain the name of the file to create
 * @text_content: text to insert in the created file
 * Return: 1 if it works -1 if it not
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd, n;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (!fd)
		return (-1);
	if (!text_content || *text_content == 0)
	{
		close(fd);
		return (1);
	}
	n = write(fd, text_content, _strlen(text_content));
	if (!n || n != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
