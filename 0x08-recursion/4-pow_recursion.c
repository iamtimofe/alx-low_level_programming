#include "main.h"

/**
 * _pow_recursion - gives the value of x raised to power of y
 * @x: value of number
 * @y: power of number
 * Return: Returns value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	 	return (-1);
	}
	else if (y  >= 0 && y <= 1)
	{
		return(1);
	}
	return (x *_pow_recursion(x, y - 1));
}
