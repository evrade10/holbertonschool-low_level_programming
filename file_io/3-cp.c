#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
/**
 * close_file - return an error if closing the file causing one
 * @fd: int
 */
void close_file(int fd)
{
	if ((close(fd)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * _cp - program that copies the content of a file to another file
 * @source: name of the source file
 * @target: name of the target file
 */
void _cp(const char *source, const char *target)
{
	int check_write, fd_source, fd_target, check_read = 1;
	char s[1024];

	fd_source = open(source, O_RDONLY);
	if (fd_source < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	fd_target = open(target, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_target < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
		exit(99);
	}

	while (check_read)
	{
		check_read = read(fd_source, s, 1024);
		if (check_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
			exit(98);
		}
		check_write = write(fd_target, s, check_read);
		if (check_write < 0 || check_write != check_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
			exit(99);
		}
	}
	close_file(fd_source);
	close_file(fd_target);
}
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);
	return (0);
}
