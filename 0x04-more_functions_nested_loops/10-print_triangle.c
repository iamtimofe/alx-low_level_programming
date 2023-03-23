#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int i = 1;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i < size; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
