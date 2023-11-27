#include "main.h"
/**
 * main - main function
 * @arc: argument number
 * @arv: argument vector
 * Return: an integer
 */
int main(int arc, char *arv[])
{
	int infd, outfd, rd_byte, wr_byte;
	char txt[BUF_SIZE];

	if (arc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	infd = open(arv[1], O_RDONLY);
	if (infd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				arv[1]);
		exit(98);
	}
	outfd = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		exit(99);
	}
	while ((rd_byte = read(infd, txt, BUF_SIZE)) > 0)
	{
		wr_byte = write(outfd, txt, rd_byte);
		if (wr_byte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					arv[2]);
			exit(99);
		}
	}
	if (rd_byte == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				arv[1]);
		exit(98);
	}
	close_fl(infd);
	close_fl(outfd);
	return (0);
}

/**
 * close_fl - close an open file
 * @filed: file descriptor
 * Return: 0 (success)
 */
void close_fl(int filed)
{
	if (close(filed) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", filed);
		exit(100);
	}
}
