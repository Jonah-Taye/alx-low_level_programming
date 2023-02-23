#include "main.h"

/**
 * _isdigit - returns 1 if its an digit and 0 if its a character
 * @c: integer to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}
