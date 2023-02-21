#include "main.h"

/**
 * _isalpha - checks if the charachter is a letter or not
 * @c: The letter to be checked
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
