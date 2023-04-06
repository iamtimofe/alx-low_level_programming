#include "main.h"

int _sqrt(int num, int sq);
int _sqrt_recursion(int n);

/**
 * _sqrt - calculates the natural square root of a given number.
 * @num: number to find the square root of.
 * @sq:  root to be tested.
 *
 * Return: Returns a natural square root
 */
int _sqrt(int num, int sq)
{
	if ((sq * sq) == num)
	{
		return (sq);
	}

	else if (sq == num / 2)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(num, sq + 1));
	}
}

/**
 * _sqrt_recursion - Returns natural square root of a number.
 * @n: number to return it's square root
 *
 * Return: natural square root of n.
 */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (_sqrt(n, sqrt));
}
