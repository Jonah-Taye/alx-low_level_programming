#include "main.h"

/**
 * print_last_digit - Finds the last digit of a number
 * @n: The number used for finding the last digit
 *
 * Return: The last digit of the integer
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n > 0)
		lastDigit = n % 10;
	else
		lastDigit = (n % 10) * -1;
	_putchar(lastDigit + '0');

	return (lastDigit);
}
