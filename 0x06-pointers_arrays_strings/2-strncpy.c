#include <string.h>

/**
 * _strncpy - Copies a string until the nth byte
 * @src: The string to copied
 * @dest: The string to be copied into
 * @n: The limit of the string to be concatenated
 *
 * Return: The copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
