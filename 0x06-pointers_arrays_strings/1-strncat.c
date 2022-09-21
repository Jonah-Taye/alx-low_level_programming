#include <string.h>

/**
 * _strncat - Concatenates two string to the nth character
 * @src: the string to concatenated
 * @dest: the string to be concatenated into
 * @n: the limit of the string to be concatenated
 *
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
