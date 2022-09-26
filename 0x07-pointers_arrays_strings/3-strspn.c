#include "main.h"
#include <string.h>

/**
 * _strspn - Gets the length of a prefix string
 * @s: The string to be matched with
 * @accept: The character to be matched
 *
 * Return: the length of the prefix string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[j] == '\0')
			return (count);
	}

	return (count);
}
