#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2,4444 
 * Description: prints
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		putchar(i);
	}
		putchar('\n');
}
