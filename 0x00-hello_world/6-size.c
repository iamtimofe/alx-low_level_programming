#include <stdio.h>

/**
 * main - program that prints the size of various data types
 * Return: Returns 0 (Success)
 */
int main(void)
{
printf("The size of char is :%d bytes(s)\n", sizeof(char));
printf("The size of int is :%d bytes(s)\n", sizeof(int));
printf("The size of long int is :%d bytes(s)\n", sizeof(long int));
printf("The size of long long int :%d bytes(s)\n", sizeof(long long int));
printf("The size of float is :%d bytes(s)\n", sizeof(float));

return (0);
}
