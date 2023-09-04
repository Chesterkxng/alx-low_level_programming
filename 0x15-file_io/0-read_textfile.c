#include  "main.h"

/**
 * read_textfile - a function that reads text filees
 * @filename: name of the file
 * @letters: number of letters to print
 * Return: the number of printed char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t  fp, to_read, printed;
	char *text;

	if (filename == NULL || letters == 0)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	if (text == NULL)
		return (0);
	to_read = read(fp, text, letters);
	printed = write(1, text, to_read);
	free(text);
	close(fp);
	if (to_read == -1 || to_read != printed)
		return (0);
	return (printed);
}
