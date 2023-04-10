#include "main.h"
#include <stdio.h>

/**
 * main - prints number of agrguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Return 0 always
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
