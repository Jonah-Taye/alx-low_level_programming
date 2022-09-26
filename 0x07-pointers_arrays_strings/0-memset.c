#include "main.h"

/**
 * _memset - Fills memeory with a constant value
 * @s: the string to be filled
 * @b: the value to be filled
 * @n: the number of bytes to be filled
 *
 * Return: the changed value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
