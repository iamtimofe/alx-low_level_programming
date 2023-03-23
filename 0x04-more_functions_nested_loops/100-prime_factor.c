#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long long num = 612852475143;
	long long divisor = 2;
	long long largest_prime = 0;

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
	printf("%lld\n", largest_prime);
	return (0);
}
