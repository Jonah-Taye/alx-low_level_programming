#include "main.h"

/**
 * _islower - finds the lower case alphabets
 *
 * @n: The letter to check
 * Return: On success 1.
 */
int _islower(int n)
{
	if (n >= 97 && n <= 122)
	{
		return (1);
	}
	return (0);
}
