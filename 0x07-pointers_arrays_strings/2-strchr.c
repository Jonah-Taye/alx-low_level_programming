#include "main.h"

/**
 * _strchr - Locatin the character in the string
 * @s: The string to be searched from
 * @c: The character to be searched
 *
 * Return: The string starting from the matched character
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
