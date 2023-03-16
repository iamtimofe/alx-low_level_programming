#include <stdio.h>

/**
 * main - program that prints the size of various data types
 * Return: Returns 0 (Success)
 */
int main(void)
{
printf("Size of char is: %d bytes(s)\n", sizeof(char));
printf("Size of int is: %d bytes(s)\n", sizeof(int));
printf("Size of long int is: %d bytes(s)\n", sizeof(long int));
printf("Size of long long int: %d bytes(s)\n", sizeof(long long int));
printf("Size of float is: %d bytes(s)\n", sizeof(float));
return (0);
}
