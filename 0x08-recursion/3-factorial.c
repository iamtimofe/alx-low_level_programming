#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: given number
 * Return: Returns factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
