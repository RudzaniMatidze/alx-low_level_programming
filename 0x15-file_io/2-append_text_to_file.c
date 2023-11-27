#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @text_content: content inside the file
 * @filename: the name of the file
 * Return: 1 if success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openfd, writefd;

	if (filename == NULL)
		return (-1);
	openfd = open(filename, O_RDWR | O_APPEND);
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
 * _strlen - calculate string length
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
