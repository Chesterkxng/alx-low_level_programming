#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 1024
/**
 * failure - print the message and exit with a spec
 * status
 * @message: text to be printed
 * @somelse: anything else to print
 * @status: value to exit with
 * Return: void
 */
void failure(const char *message, const char *somelse, int status)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, somelse);
	exit(status);
}
/**
 * main - check to code
 * @argc: number of args
 * @argv: array of args
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t b_read, written;
	char buffer[SIZE];

	if (argc != 3)
		failure("Usage: cp", "file_from file_to", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		failure("Error: Can't read from file", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		failure("Error: Can't write to", argv[2], 99);
	}

	while ((b_read = read(fd_from, buffer, SIZE)) > 0)
	{
		written = write(fd_to, buffer, b_read);
		if (written != b_read)
		{
			close(fd_from);
			close(fd_to);
			failure("Error: Can't write to", argv[2], 99);
		}
	}
	if (b_read == -1)
	{
		close(fd_from);
		close(fd_to);
		failure("Error: Can't read from file", argv[1], 98);
	}

	if (close(fd_from) == -1)
		failure("Error: Can't close fd", argv[1], 100);
	if (close(fd_to) == -1)
		failure("Error: Can't close fd", argv[2], 100);
	return (0);
}
