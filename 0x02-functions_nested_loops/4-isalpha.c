#include "main.h"

/**
 * _isalpha - Checks if a the character is a letter or not
 * @c: The charcter to be checked
 *
 * Return: 1 if it's a letter and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
