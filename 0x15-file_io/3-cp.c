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
 * _strlen - Entry point
 * Description:  a program that return the length of a given
 * char
 * @s: given char
 * Return: the number of characters
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
/**
 * copy_file - Appends text to the end of a file.
 * @src_filename: the source filename
 * @dest_filename: The dest filename.
 *
 * Return: 1 on success, -1 on failure.
 */
int copy_file(char *src_filename, char *dest_filename)
{
	int fp_src, fp_dest, len_src, len_dest;
	char buffer[SIZE] = {0};

	fp_src = open(src_filename, O_RDONLY);
	if (fp_src < 0)
		failure("Error: Can't read from file", src_filename, 98);
	fp_dest = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fp_dest < 0)
	{
		close(fp_src);
		failure("Error: Can't write to", dest_filename, 99);
	}
	len_src = read(fp_src, buffer, SIZE);
	if (len_src > 0)
	{
		len_dest = write(fp_dest, buffer, len_src);
		if (len_dest != len_src)
		{
			close(fp_dest);
			close(fp_src);
			failure("Error: Can't write to", dest_filename, 99);
		}
	}
	else
	{
		close(fp_dest);
		close(fp_src);
		failure("Error: Can't read from file", src_filename, 98);
	}
	if (close(fp_dest) == -1)
		failure("Error: Can't close fd", dest_filename, 100);
	if (close(fp_src) == -1)
		failure("Error: Can't close fd", src_filename, 100);
	return (1);
}
/**
 * main - check to code
 * @argc: number of args
 * @argv: array of args
 * Return: 0 always success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		failure("Usage:", "cp file_from file_to", 97);
	copy_file(argv[1], argv[2]);
	return (0);
}
