#include "main.h"
/**
 * print_alphabet - Entry point
 * Description Prints alphabets in lower case
 * Return: Returns void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
