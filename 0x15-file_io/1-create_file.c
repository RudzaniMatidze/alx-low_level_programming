#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file created
 * @text_content: content inside file
 * Return: 1 if file is created, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int openfd, writefd;

	if (filename == NULL)
		return (-1);
	openfd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (openfd == -1)
		return (-1);
	if (text_content != NULL)
	{
		writefd = write(openfd, text_content, _strlen(text_content));
		if (writefd == -1)
			return (-1);
	}
	close(openfd);
	return (1);
}

/**
 * _strlen - calculates string length
 * @string: array string
 * Return: string length
 */
int _strlen(char *string)
{
	int num = 0;

	while (*string++)
		num++;
	return (num);
}
