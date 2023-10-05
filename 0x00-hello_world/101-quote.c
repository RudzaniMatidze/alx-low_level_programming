#include <unistd.h>
/**
 * main - Entry point
 * Description: Print a message to standard error
 * Return: 1 (error)
 */
int main(void)
{
	 ssize_t len;
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

    len = 59;
    if (write(STDERR_FILENO, message, len) != len)
        return (1);

    return (1);
}
