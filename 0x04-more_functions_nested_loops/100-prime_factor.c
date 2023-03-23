#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{

	long num = 612852475143;
	long divisor = 2;
	long largest_prime = 0;

	while  (num > 1)
	{
		if (num % divisor == 0)
		{
			largest_prime = divisor;
			num = num / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", largest_prime);
	return (0);
}
