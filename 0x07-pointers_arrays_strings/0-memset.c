#include "main.h"

/**
 * _memset - Fills memory with a constatnt byte
 * @s: variable to be changed
 * @b: constant byte
 * @n: number of memory  byte to change
 * Return: Returns(s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
