#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned and compares with the
 program
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;
	if (j > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, j);
	}
	else if (j < 6 && j != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, j);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, j);
	}
	return (0);
}
