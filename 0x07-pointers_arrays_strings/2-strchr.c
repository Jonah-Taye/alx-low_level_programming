#include "main.h"
#include <stdio.h>

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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
