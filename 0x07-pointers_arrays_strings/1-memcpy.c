#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: memory to be changed
 * @src: memory to copy from
 * @n: number of memory to copy
 * Return: Returns (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
