#include "main.h"

/**
 * _islower - Checks if a letter is lowercase or not
 * @c: The letter to be checked
 *
 * Return: 1 if it's a lowercase letter and 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
