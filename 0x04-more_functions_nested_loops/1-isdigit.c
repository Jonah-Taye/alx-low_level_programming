#include "main.h"

/**
 * _isdigit - Checks if the integer is between 0 to 9 or not
 * @c: The digit to be checked
 *
 * Return: 1 if it's an integer between 0 to 9 and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
