#include "main.h"

/**
 * print_sign - Prints the sign of a number and returns 1, 0 or -1
 * @n: The integer that is going to be checked
 *
 * Return: 1 if the integer is greater than 0
 * 0 if the integer is zero
 * -1 if the integer is less than 0
 */
int print_sign(int n)
{
	int returnValue;

	if (n > 0)
	{
		_putchar('+');
		returnValue = (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		returnValue = (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		returnValue = (-1);
	}

	return ((returnValue));
}
