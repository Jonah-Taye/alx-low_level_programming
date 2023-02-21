#include "main.h"

/**
 * _abs - finds the absolute value of a number
 * @n: accepts the integer value
 *
 * Return: On success n * -1.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
