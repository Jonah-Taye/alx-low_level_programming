#include "main.h"

/**
 * leet - Changes the string into a leet code
 * @c: Accepts the string
 *
 * Return: Converted string
 */

char *leet(char *c)
{
	char checker[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; checker[j] != '\0'; j++)
		{
			if (c[i] == checker[j])
			{
				c[i] = checker[j + 1];
				break;
			}
		}
	}
	return (c);
}
