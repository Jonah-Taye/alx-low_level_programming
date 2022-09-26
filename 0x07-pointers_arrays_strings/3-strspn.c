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
	int count;
	int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] == ' ')
			return (count);
	}

	return (count);
}
