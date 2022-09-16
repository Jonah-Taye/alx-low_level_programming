#include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 *
 * Return: Void
 */
void print_numbers(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}
