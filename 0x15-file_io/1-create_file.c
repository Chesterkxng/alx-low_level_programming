#include "main.h"
int _strlen(char *s);
/**
 * create_file - a function that create a file
 * @filename : file name
 * @text_content: text to add int the file
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fp, len, check;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		check = write(fp, text_content, len);
		if (check < 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
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
