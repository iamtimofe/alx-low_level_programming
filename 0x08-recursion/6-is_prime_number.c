#include "main.h"
int  is_divisible(int n, int divisor);
int _is_prime_number(int n);
/**
 * is_prime_number - checks if a number is a prime
 * @n: number to be checked
 * Return: Retunrs 1 if number is a prime
 * return 0 if it is not
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n < 2)
	{
		return (0);
	}
	else if (n == 2 || n <= 3)
	{
		return (1);
	}
	else
	{
		return (!is_divisible(n, divisor + 1));
	}
}

/**
 * is_divisible - checks if a number is divisible
 * @n: numbers to be checked
 * @divisor: the divisor to be checked
 * Return: Returns 1 idf n is divisible by diversor
 * if not return 0
 */

int is_divisible(int n, int divisor)
{

	if (divisor >= n)
	{
		return (0);
	}
	else if (n % divisor == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, divisor + 1));
	}
}
