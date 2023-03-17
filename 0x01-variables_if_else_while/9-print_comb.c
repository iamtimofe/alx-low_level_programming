#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Prints digits from 0-9 seperated by , and space
 *
 * Return: Returns 0 always
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}

