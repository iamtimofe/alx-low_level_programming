#include "main.h"
/**
 * _strspn - Looks through a string for a byte
 * @s: String to be looked
 * @accept: Character array to check bytes with
 * Return: Returns (byte)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
