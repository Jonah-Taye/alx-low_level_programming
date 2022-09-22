#include <string.h>

/**
 * cap_string - Capitalizes the first letter of a word
 * @c: Accepts the string
 *
 * Return: The capitalized string
 */

char *cap_string(char *c)
{
	int i = 0;
	int len = strlen(c);

	while (i < len && *c != '\0')
	{
		if (c[i] == 32 || c[i] == '\n' || c[i] == '\t')
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] = c[i + 1] - 32;
		}
		if ((c[i] == '.' || c[i] == '?' || c[i] == '!') && !(c[i + 1] == 32))
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] = c[i + 1] - 32;
		}
		i++;
	}

	return (c);
}
