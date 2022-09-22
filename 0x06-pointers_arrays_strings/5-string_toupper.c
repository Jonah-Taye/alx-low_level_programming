#include <string.h>

/**
 * string_toupper - Converts a string to upper case
 * @c: Accepts the string
 *
 * Return: Void
 */

char *string_toupper(char *c)
{
	int i = 0;
	int len = strlen(c);

	while (i < len && *c != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		i++;
	}

	return (c);
}
