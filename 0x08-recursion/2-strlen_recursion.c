#include "main.h"

/**
 * _strlen_recursion - Prints the length of a given string
 * @s: string length to be printed
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length = 1 + _strlen_recursion(s + 1);

		return (length);
	}
}
