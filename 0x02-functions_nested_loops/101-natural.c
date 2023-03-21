#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 102
 * Return: Always (Success)
 */
int main(void)
{
	int i;
	int sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}

		i++;
	}

	printf("%d\n", sum);
	return (0);
}
