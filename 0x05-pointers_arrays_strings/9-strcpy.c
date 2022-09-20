#include "main.h"
#include <string.h>

/**
 * _strcpy - Copies a string
 * @src: String to be copied
 * @dest: Destination of copied string
 *
 * Return: Void
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int i;

	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
