#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: file to be read
 * @letters: amount of letters it should read and print
 * Return: actual letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd_fd, cnt_ch, open_fd;
	char *buffr;

	if (filename == NULL)
		return (0);
	open_fd = open(filename, O_RDONLY);
	if (open_fd == -1)
		return (0);
	buffr = malloc(sizeof(char) * letters);
	if (buffr == NULL)
		return (0);
	rd_fd = read(open_fd, buffr, letters);
	if (rd_fd == -1)
	{
		free(buffr);
		return (0);
	}
	cnt_ch = write(STDOUT_FILENO, buffr, rd_fd);
	if (cnt_ch == -1)
	{
		free(buffr);
		return (0);
	}
	close(open_fd);
	free(buffr);
	return (cnt_ch);
}
