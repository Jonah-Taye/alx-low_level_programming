#include "main.h"

/**
 * _isupper - Checks if a letter is an uppercase or not
 * @c: The letter to be checked
 *
 * Return: 1 if it's an uppercase letter and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
