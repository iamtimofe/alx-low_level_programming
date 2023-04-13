#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: Returns concatenated string of si and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	l = i + j;
	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
	{
		return (0);
	}
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		s[k] = s2[k];
	}
	s[l] = '\0';

	return (s);
}
