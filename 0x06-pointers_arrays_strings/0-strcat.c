#include <string.h>

/**
 * _strcat - Concatenates two string
 * @src: the string to concatenated
 * @dest: the string to be concatenated into
 *
 * Return: the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = strlen(dest);
	int n = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
