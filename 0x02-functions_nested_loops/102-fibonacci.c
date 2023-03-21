#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers separated by comma and space
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);

	for (int i = 3; i <= 50; i++)
	{
		c = a + b;
		printf("%d", c);

		if (i < 50)
			printf(", ");

		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}

