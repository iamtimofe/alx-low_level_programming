#include <stdio.h>
/**
 * main - Entry Level
 *
 * Description Prints alphabets in lower case while skipping q and e
 *
 * Return: Returns (0) Always
 */
int main(void)

{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
		putchar('\n');
		return (0);
}
