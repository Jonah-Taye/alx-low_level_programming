#include <string.h>

/**
 * _strcmp - Compares two strings
 * @s1: the string to be compared
 * @s2: the string to be compared
 *
 * Return: 0 if the strings are equal
 * negative or positive value if the strings are not equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;
	int len = strlen(s1);

	while (i < len && *s1 != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = 0;
			break;
		}
	}

	return (diff);
}
