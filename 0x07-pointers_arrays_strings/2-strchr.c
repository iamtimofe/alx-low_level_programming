#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string to be searched
 * @c: character to find
 * Return: Returns a pointer to the first occurence of character 'c' or NULL if
 * character not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
