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
	int i;
	int size = strlen(src);

	for (i = 0; i < size && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < size; i++)
		dest[i] = '\0';

	return (dest);
}
