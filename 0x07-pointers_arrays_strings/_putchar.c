#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Return: Returns 1 on sucess
 * on error, -1 is returned, and errno is set appropraitely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
