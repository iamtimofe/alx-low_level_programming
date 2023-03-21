#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 * Description Prints _putchar\n
 * Return: Returns 0 Always
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return:1 On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
