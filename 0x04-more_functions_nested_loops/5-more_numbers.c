#include "main.h"

/**
 * more_numbers - Prints numbers 0 to 14 ten times
 *
 * Return: Void
 */
void more_numbers(void)
{
	char numbers;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
				_putchar(numbers / 10 + '0');
			_putchar(numbers % 10 + '0');
		}
		_putchar('\n');
	}
}
