#include "main.h"

/**
 * _isupper - returns 1 if c is upper case and 0 if its not
 * @c: accepts an integer
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
