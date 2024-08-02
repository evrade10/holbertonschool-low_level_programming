#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letter to read from the file
 * Return: actual of character read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	ssize_t m;
	char *s;

	s = malloc(sizeof(char) * (letters));
	if (!s || !filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (!fd)
	{
		free(s);
		return (0);
	}
	n = read(fd, s, letters);
	if (!n || !s || *s == 0)
	{
		free(s);
		close(fd);
		return (0);
	}
	m = write(STDOUT_FILENO, s, n);
	if (!m || m != n)
	{
		free(s);
		close(fd);
		return (0);
	}
	free(s);
	close(fd);
	return (m);
}
