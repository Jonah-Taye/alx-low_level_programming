#include "main.h"

/**
 * _memcpy - Copying the memory pointed
 * @src: The memory to copy
 * @dest: The memory to be copied
 * @n: The number of bytes to copy
 *
 * Return: The changed area of memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
