#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - program that prints all possible different combinations of two
 * digits
 *
 * Return: Returns 0 Always
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		putchar(i + '0');
		putchar(j + '0');
	if (i != 9 || j != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
