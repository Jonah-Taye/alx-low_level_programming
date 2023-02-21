#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: takes in the integer
 *
 * Return: On success n % 10.
 */
int print_last_digit(int n)
{
	int number;

	number = n % 10;
	if (number < 0)
	{
		number  = number * -1;
		_putchar(number + '0');
		return (number);
	}
	else
	{
		_putchar(number + '0');
		return (number);
	}
}
