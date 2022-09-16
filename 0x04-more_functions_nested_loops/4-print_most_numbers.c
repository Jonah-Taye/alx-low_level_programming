#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9 except for 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int numbers = 48;

	while (numbers <= 57)
	{
		if (numbers ==  50 || numbers == 52)
			numbers++;
		_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}
