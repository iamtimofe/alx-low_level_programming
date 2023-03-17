#include <stdio.h>
/**
 * main - Entry Level
 * Description - Prints the base of 10 from 0 using putchar()
 *
 * Return: Returns 0 Always
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	{
		putchar('\n');
	}
	return (0);
}
