#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string and returns a pointer
 * @str: string to be duplicated
 * Return: Returns duplicated string if success  otherwise NULL
 */
char *_strdup(char *str)
{
	char *dup = NULL;
	int len = 0, i;

	if (str == NULL)
	{
		return (0);
	}
	for (len = 1; str[len]; len++)
		continue;
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
	{
		return (0);
	}
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
